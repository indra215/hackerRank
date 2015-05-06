#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
	int num[4] = {4,1,6,2};
	sort(num,num+4);
	for(int i=0;i<4;i++)
	{
		cout << num[i] << endl;
	}
	return 0;
}
