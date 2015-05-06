#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	unsigned long int n,a,b;
	for(int i=0;i<T;i++)
	{
		cin >> n;
		cin >> a;
		cin >> b;
		if(a > b)
		{
			unsigned long int temp=a;
			a = b;
			b = temp;
		}
		for(unsigned long int j=0;j<n;j++)
		{
			if(a == b){
				cout << (j*b)+((n-j-1)*a) << " ";
				break;
			}else{
				cout << (j*b)+((n-j-1)*a) << " ";
			}
		}
		cout << endl;
	}
}
