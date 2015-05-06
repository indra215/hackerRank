#include <iostream>
#include <cmath>

using namespace std;

int sum_digits(int n)
{	
	int rem,sum=0;
	while(n != 0){
		rem = n%10;
		sum += rem;
		n /= 10;
	}
	return sum;
}

int sum_prime_factors(int num)
{
	int sum_prime_factors = 0;
	int N = num;
	while(N%2 == 0){
		sum_prime_factors += 2;
		N /= 2;
	} 
	for(int i=3;i<sqrt(num);i=i+2){
		while(N%i == 0){
			sum_prime_factors += sum_digits(i);
			N /= i;
		}
	}
	if(N > 2){
		sum_prime_factors += sum_digits(N);	
	}
	return sum_prime_factors;
}

int main()
{
	int N,temp;
	cin >> N;
	if(sum_digits(N) == sum_prime_factors(N)){
		cout << 1 << endl;
	}else cout << 0 << endl;
	return 0;
}