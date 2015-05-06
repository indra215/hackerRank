#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned long long int N,M,a,b,k;
	unsigned long long int candies=0,avg_candies;
	cin >> N >> M;
	for(int i=0;i<M;i++)
	{
		cin >> a >> b >> k;
		candies += (b-a+1)*k;
	}
	avg_candies = candies/N;
	cout << avg_candies << endl;
	return 0;
}
