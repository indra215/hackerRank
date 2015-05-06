#include <iostream>

using namespace std;

int main()
{
	unsigned long int n;
	cin >> n;
	int num[n];
	int count[100]={0};
	for(unsigned long int i=0;i<n;i++)
	{
		cin >> num[i];
		count[num[i]]++;
	}
	for(int i=0;i<100;i++)
	{
		cout << count[i] << " ";
	}
	cout << endl;
	return 0;
}