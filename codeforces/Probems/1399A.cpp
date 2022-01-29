#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Remove smallest: 1399A
    int t, n, a[n], i;

    cin>>t;
    while (t--)
    {
        cin>>n;
        for(i=0; i<=n; i++)
        {   
            cin>>a[i];
        }
        sort(a+1, a+n+1);
        bool flag=1;

        for(i=2; i<=n; i++)
        {
            if(a[i]>a[i-1])
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
