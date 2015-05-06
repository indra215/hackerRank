#include <iostream>

using namespace std;

unsigned long int gcd(unsigned long int a,unsigned long int b)
{
	if(b == 0)
		return a;
	else return gcd(b,a%b);
}

int main()
{
	int T,N;
	cin >> T;
	unsigned long int num,gc;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		gc = 0;
		for(int j=0;j<N;j++)
		{
			cin >> num;
			gc = gcd(gc,num);
		}
		if(gc == 1)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
