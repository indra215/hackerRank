#include <iostream>
#include <cstdlib>

using namespace std;

int size_arr;

void printarr(int num[])
{
	for(int i=0;i<size_arr;i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
}

int Partition(int num[],int st,int en)
{
	int piv = num[en];
	int i = st-1;
	for(int j=st;j<en;j++)
	{
		if(num[j] <= piv)
		{
			i = i+1;
			int temp = num[j];
			num[j] = num[i];
			num[i] = temp;
		}
	}
	int temp = num[en];
	num[en] = num[i+1];
	num[i+1] = temp;
	return i+1;
}

void QuickSort(int num[],int st,int en)
{
	if(st < en)
	{
		int pivot = Partition(num,st,en);
		printarr(num);
		QuickSort(num,st,pivot-1);
		QuickSort(num,pivot+1,en);
	}
}

int main()
{
	cin >> size_arr;
	int num[size_arr];
	for(int i=0;i<size_arr;i++)
	{
		cin >> num[i];
	}
	QuickSort(num,0,size_arr-1);
	return 0;
}
