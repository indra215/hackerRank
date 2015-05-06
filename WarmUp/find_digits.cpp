#include <iostream>

using namespace std;

int count_digits(unsigned int N)
{
	int digits[10] = {0};
	int rem;
	unsigned int temp_N;
	temp_N = N;
	while(1)
	{
		if(temp_N <= 0)
			break;
		else{
			rem = temp_N%10;
			if(rem != 0)
			{
				if(digits[rem] != 0)
				{
					digits[rem] += 1;
				}
				else if(N%rem == 0)
				{
					digits[rem] += 1;
				}
			}
			temp_N = temp_N/10;
		}
	}
	int count = 0;
	for(int i=0;i<10;i++)
	{
		count += digits[i];
	}
	return count;
}

int main()
{
	int T,no_digits;
	unsigned int N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		no_digits = count_digits(N);
		cout << no_digits << endl;
	}
	return 0;
}
