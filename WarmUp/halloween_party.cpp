#include <iostream>

using namespace std;

int main()
{
	int T;
	unsigned long int K,hor,ver;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> K;
		hor = K/2;
		ver = K - hor;
		cout << hor*ver << endl;
	}
	return 0;
}
