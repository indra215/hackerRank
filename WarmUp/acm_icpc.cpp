#include <iostream>
#include <string>

using namespace std;

int bit_OR(string s1,string s2)
{
	int count=0;
	int len = s1.length();
	for(int i=len-1;i>=0;i--)
	{
		if(((char)s1[i])=='1' || ((char)s2[i])=='1')
		{
			count += 1;
		}
	}
	return count;
}

int main()
{
	int N,M;
	cin >> N >> M;
	string topics[N];
	int know_topics,max_topics=0,teams=0;
	for(int i=0;i<N;i++)
	{
		cin >> topics[i];	
		//cout << topics[i] << endl;
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			know_topics = bit_OR(topics[i],topics[j]);
			//cout << know_topics << endl;
			if(know_topics > max_topics)
			{
				//cout << "Inside" << endl;
				max_topics = know_topics;
				teams = 0;
				teams += 1;
			}else if(know_topics == max_topics)
			{
				//cout << "Again" << endl;
				teams += 1;
			} 
		}
	}
	cout << max_topics << endl;
	cout << teams << endl;
	return 0;
}
