#include<bits/stdc++.h>
using namespace std;

int main()
{
    // A string task:118A

    string s,S;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'y' || s[i] == 'Y' || s[i] == 'u' || s[i] == 'U')
        {
           continue;
        }
        else
        {
            S+='.';
            S+=towlower(s[i]);
        }
    }

    cout<<S<<endl;
    return 0;
}
