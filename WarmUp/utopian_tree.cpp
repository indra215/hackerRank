#include <iostream>

using namespace std;

int height(int N)
{
	int final_height=1;
	while(1)
	{
		if(N == 0)
		{
			final_height = 1;
			return final_height;
		}
		else if(N == 1)
		{
			final_height *= 2;
			return final_height;
		}
		else
		{
			final_height *= 2;
			N -= 1;
			final_height += 1;
			N -= 1;	
			if(N <= 0)
				break;
		}	
	}
	return final_height;
}

int main()
{
	int T,N,final_height;
	cin >> T;
	for(int i=1;i<=T;i++)
	{
		cin >> N;
		final_height = height(N);
		cout << final_height << endl;
	}
	return 0;
}
