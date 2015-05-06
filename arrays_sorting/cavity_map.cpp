#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	char sqr_map[n][n];
	vector <int> d1,d2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> sqr_map[i][j];
		}
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			if((sqr_map[i][j] > sqr_map[i-1][j]) && 
				(sqr_map[i][j] > sqr_map[i][j-1])&& 
				(sqr_map[i][j] > sqr_map[i+1][j]) && 
				(sqr_map[i][j] > sqr_map[i][j+1]))
			{
				d1.push_back(i);
				d2.push_back(j);
			}
		}
	}
	for(int k=0;k<d1.size();k++)
	{
		sqr_map[d1[k]][d2[k]] = 'X';
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << sqr_map[i][j];
		}
		cout << endl;
	}
	return 0;
}