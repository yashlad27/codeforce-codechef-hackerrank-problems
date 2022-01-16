#include<iostream>
using namespace std;

int main()
{
	// solider and bananas:
	
	int w; // num of bananas
		// k $ for first banana 
		// 2k $ for second banana	
	
	int n; // initial num of dollars
	int k; // price of first banana 
	
	cin>>k>>n>>w; 
	
	int sum = (((w*(w+1))*k)/2);
	
	if(sum - n<0)
	{
		cout<<0;
	}
	else
	{
		cout<<sum-n;
	}
	return 0;
}
