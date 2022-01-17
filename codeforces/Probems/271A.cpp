#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	
	// beautiful year: 271A
	int y;
	cin>>y;
	while(true)
	{
		year+=1;
		int a = y/1000; // first digit
		int b = y/100 % 10; // second digit
		int c = y/10 % 10; // third digit
		int d = y % 10; // last digit
		
		if ( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			cout<<year;
			break;
		}	
	}
	return 0;
}
