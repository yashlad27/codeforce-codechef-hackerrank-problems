#include <bits/stdc++.h>
using namespace std;
int x,n,m;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%d%d%d",&x,&n,&m);
        if(x<=m*10)
        {
            cout<<"YES"<<endl;
            continue;
        }
        while(n>0)
        {
            if(x/2+10<x)
            {
                x=x/2+10;
                n--;
            }
            else break;
        }
        if(x<=m*10)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}