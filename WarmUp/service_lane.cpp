#include <iostream>
#include <vector>

using namespace std;

void largestVehicle(int e,int l,vector<int> width)
{
	int minimum=width[e];;
	for(int i=e+1;i<=l;i++)
	{
		if(width[i] <= minimum){
			minimum = width[i];
		}
	}
	cout << minimum << endl;
}

int main()
{
	int N,T,w;
	cin >> N >> T;
	vector <int> width;
	width.reserve(N);
	for(int i=0;i<N;i++)
	{
		cin >> w;
		width.push_back(w);
	}
	int entry,leave;
	for(int i=0;i<T;i++)
	{
		cin >> entry >> leave;
		largestVehicle(entry,leave,width);
	}
	return 0;
}