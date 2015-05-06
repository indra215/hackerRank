#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int count_changes(string str)
{
	int changes=0;
	char f,l;
	int len = str.length();
	for(int j=0;j<len/2;j++)
	{
		f = str[j];
		l = str[len-j-1];
		changes += abs(l-f);
	}
	return changes;
}

int main()
{
	int T;
	cin >> T;
	string str;
	for(int i=0;i<T;i++)
	{
		cin >> str;
		cout << count_changes(str) << endl;
	}
	return 0;
}
