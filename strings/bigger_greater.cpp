#include <iostream>
#include <string>

using namespace std;

void greater_permutation(string s)
{
	int imax=-1,jmax;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i] < s[i+1])
			imax = i;
	}
	if(imax == -1)
		cout << "no answer" << endl;
	else{
		for(int j=imax+1;j<s.length();j++)
		{
			if(s[imax] < s[j])
				jmax = j;
		}
		swap(s[imax],s[jmax]);
		string s1;
		s1 = s.substr(0,imax+1);
		for(int i=s.length()-1;i>imax;i--){
			s1.append(s,i,1);
		}
		cout << s1 << endl;	
	}
}

int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		string str;
		cin >> str;
		greater_permutation(str);
	}
	return 0;
}
