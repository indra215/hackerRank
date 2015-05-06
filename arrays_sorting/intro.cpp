#include <iostream>

using namespace std;

int main()
{
	int V,n,i;
	cin >> V;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
	}
	for(i=0;i<n;i++)
	{
		if(ar[i] == V)
			break;
	}
	cout << i << endl;
}