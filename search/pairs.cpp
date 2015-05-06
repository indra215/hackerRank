#include <iostream>
#include <algorithm>

using namespace std;

bool searchRem(int num[],int start,int end,int rem)
{
	int mid = (start+end)/2;
	while(start <= end && num[mid] != rem){
		if(num[mid] < rem){
			start = mid+1;
		}else{
			end = mid-1;
		}
		mid = (start+end)/2;
	}
	if(num[mid] == rem){
		return true;
	}
	return false;
}

int main()
{
	long int N,K;
	cin >> N >> K;
	int num[N];
	for(long int i=0;i<N;i++){
		cin >> num[i];
	}
	sort(num,num+N);
	long int count=0;
	for(long int i=0;i<N;i++){
		int rem;
		rem = num[i]-K;
		if(rem >= 0 && rem > num[i]){
			if(searchRem(num,i+1,N-1,rem))
				count += 1;
		}else{
			rem = num[i]+K;
			if(searchRem(num,i+1,N-1,rem))
				count += 1;
		}
	}
	cout << count << endl;	
	return 0;
}
