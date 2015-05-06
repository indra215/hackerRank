#include <iostream>

using namespace std;

int main()
{
	int N,K,Q,Idx;
	cin >> N >> K >> Q;
	while(K > N)
		K = K - N;
	int num[N];
	for(int i=0;i<N;i++)
	{
		cin >> num[i];
	}
	if(K == N)
	{
		for(int i=0;i<Q;i++){
			cin >> Idx;
			cout << num[Idx] << endl;
		}
	}else if(K < N){
		for(int i=0;i<Q;i++)
		{
			cin >> Idx;
			int x = Idx-K;
			if(x >= 0)
				cout << num[x] << endl;
			else{
				cout << num[x+N] << endl;
			}
		}
	}
	return 0;
}
