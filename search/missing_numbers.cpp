#include <iostream>

using namespace std;

int main()
{
	long int n,m,num;
	cin >> n;
	long int count[10000]={0};
	for(long int i=0;i<n;i++){
		cin >> num;
		count[num-1] += 1;
	}
	cin >> m;
	for(long int i=0;i<m;i++){
		cin >> num;
		count[num-1] -= 1; 
	}
	for(int i=0;i<10000;i++){
		if(count[i] < 0){
			cout << i+1 << " ";
		}
	}
	cout << endl;
	return 0;
}
