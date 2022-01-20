#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	// is your horseshoe on the other hoof?:288A
	
	int mas[5], e=3;
	for(int i = 0; i<4; i++)
	{
		cin>>mas[i];
	}
	sort(mas, mas + 4);
	
	for(int i = 0; i<3; i++)
	{
		if(mas[i]!=mas[i+1])
		{
			e--;
		}
	}
	
	cout<<e;
	return 0;
}
