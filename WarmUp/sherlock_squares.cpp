#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int T;
	cin >> T;
	long int A,B;
	for(int i=0;i<T;i++){
		cin >> A >> B;
		cout << floor(sqrt(B)) - ceil(sqrt(A)) + 1 << endl;
	}
	return 0;
}