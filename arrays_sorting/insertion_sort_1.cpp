#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_vector(vector<int> ar){
	for(int i=0;i<ar.size();i++){
		cout << ar[i] << " ";
	}
	cout << endl;
}

void insertionSort(vector <int>  ar) {
	int V = ar.back();
	for(int i=ar.size()-2;i>=0;i--){
		if(ar[i] > V){
			ar[i+1] = ar[i];
			print_vector(ar);
		}else if(ar[i] < V){
			ar[i+1] = V;
			print_vector(ar);
			break;
		}
	}
	if(ar[0] > V){
		ar[0] = V;
		print_vector(ar);
	}
}

int main(void) {
   vector <int>  _ar;
   int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
	   int _ar_tmp;
	   cin >> _ar_tmp;
	   _ar.push_back(_ar_tmp); 
	}
	insertionSort(_ar);   
   	return 0;
}