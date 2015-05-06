#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool check_kaprekar(int num)
{
	string numstr = to_string(num);
	long int sq;
	int first_num,last_num;
	sq = pow(num,2);
	string sqrd = to_string(sq);
	string right = sqrd.substr(sqrd.length()-numstr.length(),numstr.length());
	first_num = stoi(right);
	if(right.length() != sqrd.length()){
		string left = sqrd.substr(0,sqrd.length()-numstr.length());
		last_num = stoi(left);
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
	int p,q;
	bool valid = false;
	cin >> p;
	cin >> q;
	//cout << p << " " << q << endl;
	for(int i=p;i<=q;i++){
		if(check_kaprekar(i)){
			valid = true;
			cout << i << " ";
		}
	}
	if(valid == false){
		cout << "INVALID RANGE.";
	}
	cout << endl;
	return 0;
}