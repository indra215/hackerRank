#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int count[N][26];
	memset(count,0,sizeof(count));
	for(int i=0;i<N;i++)
	{
		string s;
		cin >> s;
		for(int j=0;j<s.length();j++)
		{	
			count[i][s[j]-97] += 1;
		}
	}
	int flag = 0,gemstones = 0;
	for(int i=0;i<26;i++){
		for(int j=0;j<N;j++){
			if(count[j][i] == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			gemstones += 1;
	}
	cout << gemstones << endl;
	return 0;
}
