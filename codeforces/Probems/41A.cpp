#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	// translation: 41A
	/* 
	berland language: code 
	birlandish language: edoc
	*/
	string s, t, rev="";
	cin>>s;
	cin>>t;
//	reverse(s.begin(), s.end());

//	cout<<s;
//	cout<<t;

	// check function:
	for(int i=s.length()-1; i>=0; i--)
	{
		rev = rev + s[i];
	}
	
	//cout<<rev;
	
	if(s != rev)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
