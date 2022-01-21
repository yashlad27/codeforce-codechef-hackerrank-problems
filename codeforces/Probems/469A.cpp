#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	// I wanna be the Guy: 469A
	int n;
	cin>>n;
	
	int arr[n+1] = {0};	
	int p,q,lvl;
	cin>>p;	
	for(int i = 0; i<p; i++)
	{
		cin>>lvl;
		arr[lvl] = 1;
	}
	
	cin>>q;	
	for(int i = 0; i<q; i++)
	{
		cin>>lvl;
		arr[lvl] = 1;
	}
	
	for(int i = 1; i<=n; i++)
	{
		if(arr[i]==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}
