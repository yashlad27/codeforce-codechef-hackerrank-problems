#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	
	// george and accommodation: 467A
	
	int n; // number of rooms
	cin>>n;
	
	int p,q,ans; // no. of people living in room, room's capacity
	
	for(int i = 0; i<n; i++)
	{
		cin>>p>>q;
		if(q-p>=2)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
