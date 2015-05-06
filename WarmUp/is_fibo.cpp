#include <iostream>

using namespace std;

int isfibo(unsigned long long int N)
{
	unsigned long long int fib0 = 0;
	unsigned long long int fib1 = 1;
	while(fib1 <= N)
	{
		fib1 = fib0 + fib1;
		fib0 = fib1 - fib0;
		if(fib1 == N)
			return 1;	
	}
	return 0;	
}

int main()
{
	unsigned long int T;
	unsigned long long int N;
	cin >> T;
	for(unsigned long int i=0;i<T;i++)
	{
		cin >> N;
		int f = isfibo(N);
		if(f)
			cout << "IsFibo" << endl;
		else cout << "IsNotFibo" << endl;
	}
	return 0;
}
