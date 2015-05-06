#include <iostream>

using namespace std;

int total_chocolates(unsigned long int N,unsigned long int C,unsigned long int M)
{
	int chocolates,wrappers;
	chocolates = N/C;
	wrappers = chocolates;
	while(1)
	{
		if(wrappers >= M)
		{
			chocolates += wrappers/M; 
			wrappers = (wrappers/M) + (wrappers%M);
		}else{
			break;
		}
	}
	return chocolates;
}

int main()
{
	int T;
	unsigned long int N,C,M;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N >> C >> M;
		cout << total_chocolates(N,C,M) << endl;
	}
	return 0;
}
