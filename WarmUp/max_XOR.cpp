#include <iostream>

using namespace std;

unsigned int maxXOR(unsigned int L,unsigned int R)
{
	unsigned int A,B,C;
	unsigned int max_xor = 0;
	A = L;
	while(A <= R)
	{
		B = A;
		while(B <= R)
		{
			C = A^B;
			if(C >= max_xor)
				max_xor = C;
			B += 1;
		}
		A += 1;
	}
	return max_xor;
}

int main()
{
	unsigned int L,R;
	cin >> L;
	cin >> R;
	
	unsigned int result = maxXOR(L,R);
	cout << result << endl;
	
	return 0;
}
