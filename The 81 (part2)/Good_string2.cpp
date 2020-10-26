#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();

        map<char,ll>mp;
        map<string,ll>mp1;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;

        }
        for(int i=0;i<n-1;i++)
        {
            string x;
            x+=s[i];
            x+=s[i+1];
            mp1[x]++;
        }

        int i=2;
        while(s[i]==s[i-2]&&s[i+1]==s[i-1]&&i<n-1)
        {
            i+=2;
        }

        ll ans=(n-i);

        if(mp.size()==1)
        {
            cout<<0<<"\n";
        }
        else
        {
            ll mx=0,mx1=0;
            for(auto x:mp)
            {
             mx=max(x.second,mx);
            }
            for(auto x:mp1)
            {
                mx1=max(x.second,mx1);
            }
            cout<<min(min(ans,(n-2*mx1)),(n-mx))<<"\n";
        }



    }
}

