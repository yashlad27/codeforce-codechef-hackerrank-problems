// c = a^2 - b : vasya formula
// c^2 = a^2 + b^2 : pythagoras formula
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353
 
signed main()
{
    FIO;
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        
        ll a=3;
        
        // iterate a till the codintion is specified
        while((a*a)+1<=2*n)
        {
            // get c
            ll c=((a*a)+1)/2;
            
            // get b
            ll b=c-1;
            
            // check if a,b,c we got are correct or not as per question
            if(a<=b and b<=c and c<=n)ans++;
            
            // increment a by 2 each time
            a+=2;
        }
        
        // finally print the answer
        cout<<ans<<endl;
    }
}