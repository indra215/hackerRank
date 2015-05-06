#include <iostream>

using namespace std;

unsigned long int Merge(unsigned int a[],unsigned long int s,unsigned long int mid,unsigned long int e)
{
	unsigned long int i,j,inversions = 0;
	while(i <= mid-s && j < e-mid)
	{
		if(a[i] <= a[j+mid+1])
		{
			inversion += j;
			i += 1;
		}
		else{
			j += 1;
		}
	}
	
}

unsigned long int Count_Shifts(unsigned int a[],unsigned long int s,unsigned long int e)
{
	if(s < e)
	{
		unsigned long int mid = (s+e)/2;
		unsigned long int left_inv = Count_Shifts(a,s,mid);
		unsigned long int right_inv = Count_Shifts(a,mid+1,e);
		unsigned long int final_inv = Merge(a,s,mid,e);
	}	
}

int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		unsigned long int N;
		cin >> N;
		unsigned int a[N];
		for(unsigned long int i=0;i<N;i++)
		{
			cin >> a[i];
		}
		cout << Count_Shifts(a,0,N-1) << endl;
	}
	return 0;
}
