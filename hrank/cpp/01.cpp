#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
}


int main(){
    // String stream
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}