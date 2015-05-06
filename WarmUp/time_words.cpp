#include <iostream>
#include <string>

using namespace std;

int main()
{
	int H,M;
	cin >> H;
	cin >> M;
	string words[] = {"one","two","three","four", "five", "six","seven", "eight", "nine","ten",
        "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
        "twenty","twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
        "twenty six","twenty seven","twenty eight", "twenty nine"};
    if(M > 30 && M != 45){
    	int m = 60-M;
    	cout << words[m-1] << " minutes to " << words[H] << endl;
    }else if(M < 30 && M != 0 && M != 15){
    	cout << words[M-1] << " minutes past " << words[H-1] << endl;
    }else if(M == 0){
    	cout << words[H-1] << " o' clock" << endl;
    }else if(M == 15){
    	cout << "quarter past " << words[H-1] << endl;
    }else if(M == 30){
    	cout << "half past " << words[H-1] << endl;
    }else if(M == 45){
    	cout << "quarter to " << words[H] << endl;
    }    
	return 0;
}