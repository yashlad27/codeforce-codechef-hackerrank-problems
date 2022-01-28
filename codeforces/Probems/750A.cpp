#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	// new year and hurry: 750A
	
	int n,k,count=0;
	cin>>n>>k;
	
	int time=k, i;
	for(i=1;i<=n;i++){
		time+=5*i;
		
		if(time>240){
			break;
		}
	}
	
	cout<<i-1;
	return 0;
}
