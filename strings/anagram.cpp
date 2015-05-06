#include <iostream>
#include <string>

using namespace std;

int anagram(string s)
{
	if(s.length()%2 != 0)
		return -1;
	int len = s.length();
	string s1,s2;
	s1 = s.substr(0,len/2);
	s2 = s.substr(len/2,len/2);
	//cout << s1 << endl << s2 << endl;
	int count[26]={0};
	for(int i=0;i<len/2;i++)
	{
		count[s1[i]-97]++;
		count[s2[i]-97]--;
	}
	int flag=1,no_plus=0,no_minus=0;
	for(int i=0;i<26;i++){
		if(count[i] > 0){
			no_plus += count[i];
			flag = 0;	
		}
		else if(count[i] < 0){
			no_minus += (-count[i]);
			flag = 0;	
		}else if(count[i] == 0 && flag==1){
			flag = 1;
		}
	}
	if(flag==1)
		return 0;
	if(no_plus == no_minus)
		return no_plus;
	return -2;
}

int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		string s;
		cin >> s;
		cout << anagram(s) << endl;
	}
	return 0;
}
