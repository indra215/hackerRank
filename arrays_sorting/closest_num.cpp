#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void getClosestNum(long int num[],int size)
{
	long int min,diff;
	min = abs(num[1]-num[0]);
	for(int i=1;i<size-1;i++)
	{
		diff = abs(num[i+1]-num[i]);
		if(diff < min)
		{
			min = diff;
		}
	}
	for(int i=0;i<size-1;i++)
	{
		if(abs(num[i+1]-num[i]) == min)
		{
			cout << num[i] << " " << num[i+1] << " ";
		}
	}
	cout << endl;
}

int main()
{
	int N;
	cin >> N;
	long int num[N];
	for(int i=0;i<N;i++)
	{
		cin >> num[i];
	}
	sort(num,num+N);
	for(int i=0;i<N;i++)
	{
		cout << num[i] << " ";
	}
	//getClosestNum(num,N);
	return 0;
}
