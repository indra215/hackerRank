#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string s1;
	char c;
	swap(s[1],s[0]);
	s1= s.substr(0,s.length());
	s1.append(s,4,1);
	cout << s1 << endl;
	return 0;
}
