#include <iostream>
#include <algorithm>

using namespace std;

int select(int *a, int s, int e, int k) {
if(e-s+1 <= 5)
{
    sort(a+s, a+e);
    return s+k-1;
}

for(int i=0; i<(e+1)/5; i++)
{
    int left = 5*i;
    int right = left + 4;
    if(right > e) right = e;

    int median = select(a, left, right, 3);
    swap(a[median], a[i]);
}
return select(a, 0, (e+1)/5, (e+1)/10); }

int main() 
{  
    long int ar_size;
    cin >> ar_size;
    int a[ar_size];
    for(long int i=0;i<ar_size;i++)
    {
        cin >> a[i];
    }

int mom = select(a, 0, ar_size-1, ar_size/2);
cout << a[mom] << endl;
return 0; }