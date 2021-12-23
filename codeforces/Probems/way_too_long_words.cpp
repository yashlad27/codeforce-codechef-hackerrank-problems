#include<iostream>
using namespace std;

// Problem 71A
int main()
{
    
    int n;
    cin>>n;
    while(n)
    {
        string txt;
        cin >> txt;
        if(txt.size() > 10)
        {
            cout<<txt[0]+to_string(txt.size()-2)+txt[txt.size()-1]<<"\n";
        }  
        else
        {
            cout<<txt<<"\n";
        }
        n--;
    }
    return 0;
}