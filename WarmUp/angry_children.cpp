#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	unsigned long int N,K;
	cin >> N;
	cin >> K;
	unsigned long long int candies[N];
	unsigned long long int min_fairness=0;
	for(unsigned long int i=0;i<N;i++)
	{
		cin >> candies[i];
	}
	qsort(candies,N,sizeof(unsigned long long int),compare);
	min_fairness = (candies[K-1]-candies[0]);
	for(unsigned long int i=1;i<N-K;i++)
	{
		if((candies[K+i-1]-candies[i]) <= min_fairness)
		{
			min_fairness = (candies[K+i-1]-candies[i]);
		}
	}
	cout << min_fairness;
	return 0;
}
