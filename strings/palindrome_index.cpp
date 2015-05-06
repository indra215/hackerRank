#include <iostream>
#include <string>

using namespace std;

int palindrome(string s)
{
	int start = 0,end=s.length()-1;
	while(start < end)
	{
		if(s[start] != s[end])
			break;
		start += 1;
		end -= 1;	
	}
	if(start >= end)
		return -1;
	int nowstart = start;	//removes from the last
	int nowend = end-1;	
	while(nowstart < nowend){
		if(s[nowstart] != s[nowend])
			break;
		nowstart += 1;
		nowend -= 1;
	}
	if(nowstart >= nowend)
		return end;
	nowstart = start+1;		//removes from the first
	nowend = end;
	while(nowstart < nowend){
		if(s[nowstart] != s[nowend])
			return -2;			//if the string can never be palindrome by removing 1 character
		nowstart += 1;
		nowend -= 1;
	}
	return start;
}

int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		string s;
		cin >> s;
		cout << palindrome(s) << endl;	
	}
	return 0;
}
