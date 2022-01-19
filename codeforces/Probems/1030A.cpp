#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	// in search of an easy problem: 1030A
	int n,i; // number of people
	cin>>n;	
	while(n>0)
	{
		cin>>i;
		if(i==1){
			cout<<"HARD"<<endl;
			return 0;
		}
		n--;
	}
	cout<<"EASY"<<endl;

	return 0;
}
