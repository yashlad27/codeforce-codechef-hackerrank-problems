#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// nearly lucky number: 110A
	int n;
	cin>>n;
	int count = 0;
	while(n!=0)
	{
		if(n%10==4 || n%10==7)
		{
			count+=1;
		}
		n /= 10;
	}
	
	if(n % 4 == 0 || n % 7 == 0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	return 0;
}
