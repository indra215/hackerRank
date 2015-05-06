#include <iostream>
#include <algorithm>

using namespace std;

int CheckSwapping(long int a[],long int b[],long int size)
{
	long int p1,p2;
	p1 = p2 = -1;
	bool canSwap = true;
	for(long int i=0;i<size;i++)
	{
		if(a[i] == b[i]){
			continue;
		}
		if(p1==-1){
			p1 = i;
			continue;
		}
		if(p2==-1){
			p2 = i;
			continue;
		}
		canSwap = false;
		break;
	}
	if(p1 == -1){
		cout << "yes" << endl;
		return 0;	
	}
	else if(canSwap && p1!=-1 && p2!=-1 && b[p2]==a[p1] && b[p1]==a[p2]){
		cout << "yes" << endl;
		cout << "swap " << p1+1 << " " << p2+1 << endl;
		return 0;
	}
	return 1;
}

void CheckReverse(long int a[],long int size)
{
	bool canReverse = true,reverse = false;
	long int p1,p2,i=0,j;
	while(i < size-1){
		if(a[i] < a[i+1]){
			i += 1;
			continue;
		}
		if(reverse){
			canReverse = false;
			break;
		}
		j = i;
		while(j < size-1 && a[j]>a[j+1]){
			++j;
		}
		p1 = i;
		p2 = j;
		swap(a[i],a[j]);
		i = j;
		reverse = true;
	}
	if(canReverse){
		cout << "yes" << endl;
		cout << "reverse " << p1+1 << " " << p2+1 << endl;
	}else{
		cout << "no" << endl;
	}
}

int main()
{
	long int n;
	cin >> n;
	long int num1[n],num2[n],d;
	for(long int i=0;i<n;i++)
	{
		cin >> d;
		num1[i] = num2[i] = d;
	}
	sort(num2,num2+n);
	int suc = CheckSwapping(num1,num2,n);
	if(suc)
		CheckReverse(num1,n);
	return 0;
}
