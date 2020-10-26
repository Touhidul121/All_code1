#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool isAnswer(ll n)
{

    int cnt=0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            if(cnt>1)return false;
            cnt=0;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;
    set<ll>st;

    for(ll i=1;i*i<=n;i++)
    {

        if(n%i==0)
        {
            st.insert(i);st.insert(n/i);
        }
    }
    for(auto it=st.rbegin();it!=st.rend();it++)
    {
        if(isAnswer(*it)){
            cout<<*it<<"\n";
            return 0;
        }
    }
}
