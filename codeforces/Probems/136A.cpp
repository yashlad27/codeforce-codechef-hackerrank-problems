#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	
	// Presents: 136A
	int n,k; 
	cin>>n;
	int arr[n+1];
	for(int i = 1; i<=n; i++){
		cin>>k;
		arr[k]=i;
	}
	
	for(int i = 1; i<=n; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
