#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		double d,k;
		cin >> d >> k;
		double count=0;
		for(double x=0;x<=sqrt(d);x++){
			double y = sqrt(d-x*x);
			if(y == (int)y && x!=0 && y!=0){
				count += 4;
			}else if(y == (int)y && (x==0 || y==0)){
				count += 2;
			}
		}
		if(count > k)
			cout << "impossible" << endl;
		else cout << "possible" << endl;
	}
	return 0;
}
