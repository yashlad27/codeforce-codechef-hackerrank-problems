#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	
	// Magnets : 344A
	int n; // number of magnets
	cin>>n;
	
	int a[n];
	int count = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i]; // -+ or +- position 	
	}
	for(int i = 0; i<n; i++){
		if(a[i]!=a[i+1]){
			count++;
		}
	}
	cout<<count;
	return 0;
}
