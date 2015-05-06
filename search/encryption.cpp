#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int rows = floor(sqrt(len));
	int cols = ceil(sqrt(len));
	if(rows*cols < len)
		rows += 1;
	//cout << rows << cols << endl;
	for(int c=0;c<cols;c++){
		for(int r=0;r<rows;r++){
			if(c + r*cols < len){
				cout << s[c+r*cols];
			}
		}
		cout << " ";
	}
	return 0;
}
