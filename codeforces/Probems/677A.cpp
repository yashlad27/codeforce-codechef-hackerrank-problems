#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	
	// vanya and fence: 677A
	int n, h;
	cin>>n>>h;
	
	int i;// individual heights
	int count = 0;
	
	while(n)
	{
		cin>>i;
		if(i>h)
		{
			count+=2;
		}
		else{
			count+=1;
		}
		n--;	
	}
	cout<<count;
	return 0;
}
