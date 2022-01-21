#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	// Insomnia Cure: 148A
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	
	int count=0;
	/*
	kth dragon -> frying pan
	lth dragon -> tail shut
	mth dragon -> paws trampled
	nth dragon -> mom	
	d -> num of dragons
	*/
	
	for(int i=1; i<=d; i++)
	{
		if(i%k==0 || i%l==0 || i%m==0 || i%n == 0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
