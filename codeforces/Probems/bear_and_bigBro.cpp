#include<iostream>
#include<string>
using namespace std;

int main()
{
	//cout<<"running";
	// bear and big brother:
	// bear limak > brother bob
	
	int a,b,y=0; // a = weight of limak, b = weight of bob
	cin>>a,b;
	
	// limak weight gets tripled every year = 3a
	// bob weight gets doubled every year = 2b
	while(1)
	{
		y++;
		a = a*3;
		b = b*2;
		
		if(a>b)
		{
			cout<<y;
			break;
		}
	}

	return 0;
}
