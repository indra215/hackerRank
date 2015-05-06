#include <iostream>

using namespace std;

int main()
{
	int T,flag;
	cin >> T;
	unsigned long int N;
	unsigned int m,n;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		for(n=0;n<=N/5;n++)
		{
			if((N-5*n)%3 == 0)
			{
				m = (N-5*n)/3;
				flag = 1;
				break;
			}else{
				flag = 0;
			}
		}
		if(flag)
		{
			unsigned long int a = 3*m;
			unsigned long int b = 5*n;
			for(unsigned long int i=0;i<a;i++)
			{
				cout << "5";
			}
			for(unsigned long int i=0;i<b;i++)
			{
				cout << "3";
			}
		}else{
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}
