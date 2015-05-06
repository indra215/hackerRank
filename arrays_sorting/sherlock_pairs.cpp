#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		unsigned long int N;
		cin >> N;
		unsigned long int num[N];
		unsigned long int count[1000000]={0};
		unsigned long int n,freq=0;
		for(unsigned long int j=0;j<N;j++)
		{
			cin >> n;
			count[n-1] += 1;
		}
		for(unsigned long int j=0;j<N;j++)
		{
			if(count[j] > 1)
			{
				freq += (count[j])*(count[j]-1);
			}
		}
		cout << freq << endl;
	}
	return 0;
}

