#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> flavors(int cost[],int N,int M)
{
	int left,rem;
	vector<int> found;
	for(left=0;left<N;left++)
	{
		found.push_back(left);
		rem = M - cost[left];
		if(rem > 0)
		{
			int beg=left+1;
			int end=N-1;
			int mid = (beg+end)/2;
			while(beg <= end && cost[mid] != rem){
				if(cost[mid] < rem){
					beg = mid+1;
				}else{
					end = mid-1;
				}
				mid = (beg+end)/2;
			}
			if(cost[mid] == rem){
				found.push_back(mid);
				break;	
			}
			else found.clear();
		}
	}
	return found;
}

int main()
{
	int T,M,N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> M;
		cin >> N;
		int cost[N],cost_dup[N],c;
		vector<int> found;
		for(int i=0;i<N;i++){
			cin >> c;
			cost[i] = cost_dup[i] = c;
		}
		sort(cost,cost+N);
		found = flavors(cost,N,M);
		for(int i=0;i<N;i++){
			int f = found[0];
			if(cost[f] == cost_dup[i]){
				found.push_back(i);
				break;
			}
		}
		for(int i=0;i<N;i++){
			int f = found[1];
			if(cost[f] == cost_dup[i] && i!=found[2]){
				found.push_back(i);
				break;
			}
		}
		int fir = (found[2] > found[3])?found[3]+1:found[2]+1;
		int sec = (found[2] > found[3])?found[2]+1:found[3]+1;
		cout << fir << " " << sec << endl;
	}
	return 0;
}
