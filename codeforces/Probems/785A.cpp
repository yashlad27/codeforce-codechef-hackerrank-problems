#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	// Anton and ployhedrons: 785A
	int n, face;
	cin>>n;
	
	string shape;
	
	while(n--)
	{
		cin>>shape;
		if(shape=="Tetrahedron")
		{
			face+=4;
		}
		if(shape=="Cube")
		{
			face+=6;
		}
		if(shape=="Octahedron")
		{
			face+=8;
		}
		if(shape=="Dodecahedron")
		{
			face+=12;
		}
		if(shape=="Icosahedron")
		{
			face+=20;
		}
	}
	cout<<face<<endl;
	return 0;
}
