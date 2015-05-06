#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	char c;
	int count[26]={0};
	for(int i=0;i<s.length();i++)
	{
		c = s[i];
		if(tolower(c) != 32){
			count[tolower(c)-97] += 1;	
		}
	}
	int flag = 0;
	for(int i=0;i<26;i++)
	{
		if(count[i] == 0){
			cout << "not pangram" << endl;
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout << "pangram" << endl;
	}
	return 0;
}
