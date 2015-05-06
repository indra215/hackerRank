#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> sticks;

void subtract(int i)
{
	i -= sticks[0];
}

int main()
{
	int N,l;
	cin >> N;
	sticks.reserve(N);
	for(int i=0;i<N;i++)
	{
		cin >> l;
		sticks.push_back(l);
	}
	sort(sticks.begin(),sticks.end());
	while(sticks.size() != 0)
	{
		for_each (sticks.begin(), sticks.end(), subtract);
		
	}
}