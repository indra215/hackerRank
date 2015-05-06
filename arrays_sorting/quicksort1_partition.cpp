#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_vector(vector <int> ar)
{
	for(int i=0;i<ar.size();i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void partition(vector <int>  ar) 
{
	int p = ar.at(0);
	vector <int> f1,f2;
	for(int i=1;i<ar.size();i++)
	{
		if(ar[i] < p)
		{
			f1.push_back(ar[i]);
		}else{
			f2.push_back(ar[i]);
		}
	}
	vector <int> final;
	final.reserve(f1.size()+f2.size()+1);
	final = f1;
	final.push_back(p);
	final.insert(final.end(),f2.begin(),f2.end());
	print_vector(final);
}

int main(void) 
{
   	vector <int>  _ar;
   	int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) 
	{
	   int _ar_tmp;
	   cin >> _ar_tmp;
	   _ar.push_back(_ar_tmp); 
	}

	partition(_ar);
   
   return 0;
}