#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	// 1328A - Divisibility Problem
	int t;
	cin>>t;
	
	while(t--){
		long long int a,b;
		cin>>a>>b;
		if(a%b==0){
			cout<<0<<endl;
		}
		else{
			cout<<b-(a%b)<<endl;
		}
	}
	return 0;
}
