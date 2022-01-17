#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	// anton and danik : 734A
	
	int n, ant, dan; // number of games played in a row
	string s; // anton = "A" & daink = "D"
	cin>>n;
	cin>>s;
	
	for(int i = 0; i<n; i++)
	{
		if(s[i]=='A')
		{
			ant++
		}
		else if(s[i]=='D')
		{
			dan++;
		}
	}
	
	if(ant == dan)
	{
		cout<<"Friendship";
	}
	else if(ant>dan)
	{
		cout<<"Anton";
	}
	else
	{
		cout<<"Daink";
	}
	return 0;
}
