#include <iostream>
#include <string>

using namespace std;

int min_steps(string s)
{
	string prev,current;
	int del=0,len;
	len = s.length();
	prev = s.substr(0,1);
	current = s.substr(1,1);
	for(int i=2;i<=len;i++)
	{
		if(!current.compare(prev))
		{
			del += 1;
			current = s.substr(i,1);
		}else{
			prev = current;
			current = s.substr(i,1);
		}
	}
	return del;
}

int main()
{
	int T;
	string str;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> str;
		cout << min_steps(str) << endl;
	}
	return 0;
}
