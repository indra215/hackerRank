#include <iostream>

using namespace std;

int main()
{
	unsigned long int n;
	cin >> n;
	int num,sum=0;
	string str;
	int count[100]={0};
	for(unsigned long int i=0;i<n;i++)
	{
		cin >> num >> str;
		count[num]++;
	}
	for(int i=0;i<100;i++)
	{
		sum += count[i];
		cout << sum << " ";
	}
	cout << endl;
	return 0;
}