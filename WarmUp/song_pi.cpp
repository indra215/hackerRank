#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>

using namespace std;

string pi_value = "31415926535897932384626433833";

bool check_pi_song(string song)
{
	string buf;
	stringstream ss(song);

	vector<int> pieces;

	while(ss >> buf){
		pieces.push_back(buf.length());
	}

	for(int i=0;i<pieces.size();i++){
		if(pieces[i] != (pi_value[i] - '0')){
			return false;
		}
		// cout << pi_value[i] - '0' << endl;
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	getchar();
	for(int i=0;i<T;i++){
		string song;
		getline(cin,song);
		if(check_pi_song(song))
			cout << "It's a pi song." << endl;
		else cout << "It's not a pi song." << endl;
		/*cout << song << endl;*/
	} 
	return 0;
}