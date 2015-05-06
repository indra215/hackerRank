#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N,l,mx,mn;
	cin >> N;
	vector<int> length;
	length.reserve(N);
	for(int i=0;i<N;i++){
		cin >> l;
		length.push_back(l);
	}
	mx = *max_element(length.begin(),length.end());
	while(mx > 0){
		int mn = mx;
		for(int i=0;i<N;i++){
			if(length[i] > 0){
				mn = min(mn,length[i]);
			}
		}
		int tot_cuts=0;
		for(int i=0;i<N;i++){
			if(length[i] > 0){
				tot_cuts += 1;
				length[i] -= mn;
			}
		}
		cout << tot_cuts << endl;
		mx = *max_element(length.begin(),length.end());
	}
	return 0;
}