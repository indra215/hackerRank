#include <iostream>
#include <algorithm>

using namespace std;

int Partition(int num[],int l,int r)
{
	int piv = num[r];
	int ind = l-1;
	for(int i=l;i<r;i++)
	{
		if(num[i] <= piv)
		{
			ind += 1;
			swap(num[ind],num[i]);
		}
	}
	swap(num[ind+1],num[r]);
	return ind+1;
}

int selection_algo(int num[],int st,int en,int md)
{
	for(;;)
	{
		int pivot=Partition(num,st,en);
		int len = pivot-st;
		if(md == len)
			return num[pivot];
		if(md < len)
			en = pivot-1;
		else{
			md = md - len - 1;
			st = pivot+1;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin >> num[i];
	}
	cout << selection_algo(num,0,n-1,n/2) << endl;
	return 0;
}
