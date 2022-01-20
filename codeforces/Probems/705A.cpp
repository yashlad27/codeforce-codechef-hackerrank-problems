#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	// hulk: 705A
	int n;
	cin>>n;
	
	for(int i = 0; i<n; i++){
		if(i%2==0){
			cout<<"I hate ";
		}
		else{
			cout<<"I love ";
		}
		
		if(i!=n-1){
			cout<<"that ";
		}
		else{
			cout<<"it ";
		}
	}
	return 0;
}
