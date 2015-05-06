#include <iostream>
#include <string>

using namespace std;

int anagram(string s1,string s2)
{
	int len1 = s1.length();
	int len2 = s2.length();
	int count[26]={0};
	for(int i=0;i<len1;i++)
	{
		count[s1[i]-97]++;
	}
	for(int i=0;i<len2;i++)
	{
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
	return no_plus+no_minus;
}

int main()
{
	string s1,s2;
	cin >> s1;
	cin >> s2;
	cout << anagram(s1,s2) << endl;
	return 0;
}
