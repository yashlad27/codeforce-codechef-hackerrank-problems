#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }

        int rem = n%10;
        int y = 9-rem;
        int x=n, flag=0;

        while(y--)
        {
            n++;
            if(n%7==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout<<n<<endl;
            continue;
        }
        while(rem--)
        {
            x--;
            if(x%7==0)
            {
                break;
            }

        }

        cout<<x<<endl;        
    }
    return 0;
}
