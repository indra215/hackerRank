#include <iostream>

using namespace std;

int main()
{
	int N,num,count[101]={0};
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> num;
		count[num] += 1;
	}
	for(int i=0;i<101;i++){
		if(count[i] == 1){
			cout << i << endl;
			break;
		}
	}
	return 0;
}