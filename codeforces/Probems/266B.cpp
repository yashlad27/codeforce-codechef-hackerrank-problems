#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	// queue at the school: 266B
	int n, t;
	cin>>n>>t;
	
	//int b,g;
	string s;
	cin>>s;
	
	while(t)
	{
		for(int i=1; i<n; i++)
		{
			if(s[i-1]=='B' && s[i]=='G')
			{
				s[i-1] = 'G';
				s[i] = 'B';
				i++;
			}
		}
		t--;
	}
	
	cout<<s;
	return 0;
}
