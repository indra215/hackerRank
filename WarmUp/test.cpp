#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdio>
#include <sstream>

using namespace std;

bool check_kaprekar(int num)
{
	string numstr = to_string(num);
	long int sq;
	int first_num,last_num;
	sq = pow(num,2);
	string sqrd = to_string(sq);
	string first = sqrd.substr(0,numstr.length());
	first_num = stoi(first);
	if(first.length() != sqrd.length()){
		string last = sqrd.substr(numstr.length(),sqrd.length()-numstr.length());
		last_num = stoi(last);
	}else{
		last_num = 0;
	}
	if(first_num+last_num == num){
		return true;
	}
	return false;
}

int main()
{
	int p;
	cin >> p;
	if(check_kaprekar(p)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}