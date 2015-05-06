#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

//Method 1 which is a bit complicated and messy
int main()
{
	int T;
	unsigned int n,a,b;
	vector<unsigned long long int> old_size;
	vector<unsigned long long int> new_size;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> n;
		cin >> a;
		cin >> b;
		if(a > b)
		{
			unsigned long int temp = a;
			a = b;
			b = temp;
		}
		old_size.reserve(1);
		old_size[0] = 0;
		for(unsigned long int i=1;i<n;i++)
		{
			new_size.reserve(i+1);
			new_size[0] = (old_size[0] + a);
			new_size[1] = (old_size[0] + b);
			for(unsigned long int j=2;j<=i;j++)
			{
				new_size[j] = (old_size[j-1] + b);
			}
			old_size.reserve(i+1);
			for(unsigned long int k=0;k<i+1;k++)
			{
				old_size[k] = new_size[k];
			}
		}
		for(unsigned long int i=0;i<n;i++)
		{
			if(a==b)
			{
				cout << new_size[0];
				break;
			}
			else{
				cout << new_size[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

// Method 2 which is very simple and straight forward
/*
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
*/
