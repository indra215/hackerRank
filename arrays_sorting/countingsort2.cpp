#include <iostream>

using namespace std;

int main()
{
	unsigned long int n;
	cin >> n;
	int num;
	int count[100]={0};
	for(unsigned long int i=0;i<n;i++)
	{
		cin >> num;
		count[num]++;
	}
	for(int i=0;i<100;i++)
	{
		if(count[i] != 0)
		{
			for(int j=0;j<count[i];j++)
				cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}