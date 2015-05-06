#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	long int X,Y,Z,B,W,mn,tot_cost;
	for(int i=0;i<T;i++){
		cin >> B >> W;
		cin >> X >> Y >> Z;
		if(min(X,Y)+Z < max(X,Y)){
			tot_cost = (X < Y)?B*X+W*(X+Z):W*Y+B*(Y+Z);
			cout << tot_cost << endl;
		}else{
			tot_cost = B*X+W*Y;
			cout << tot_cost << endl;
		}
	}
	return 0;
}