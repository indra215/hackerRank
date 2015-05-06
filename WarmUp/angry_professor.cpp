#include <iostream>
#include <vector>

using namespace std;

bool class_status(vector<int> arr_times,int req)
{
	int present_students=0;
	for(int i=0;i<arr_times.size();i++){
		if(arr_times[i] <= 0)
			present_students++;
	}
	if(present_students < req)
		return true;
	return false;
}

int main()
{
	int T,N,K,t;
	cin >> T;
	for(int i=0;i<T;i++){
		cin >> N >> K;
		vector<int> arr_times;
		arr_times.reserve(N);
		for(int i=0;i<N;i++){
			cin >> t;
			arr_times.push_back(t);
		}
		if(class_status(arr_times,K))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}