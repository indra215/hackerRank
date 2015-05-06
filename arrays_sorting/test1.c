#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> ar){
    for(int i=0;i<ar.size();i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    int V,k,shifts=0;
    for(int j=1;j<ar.size();j++){
        V = ar[j];
        k = j;
        for(int i=j-1;i>=0;i--){
            if(ar[i] > V){
                ar[k] = ar[i];
                ar[i] = V;
                k = i;
                shifts++;
            }
        }
    }
    cout << shifts << endl;
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