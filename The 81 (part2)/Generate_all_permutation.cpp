#include<bits/stdc++.h>
using namespace std;

void solve(string s,int l,int n)
{
    if(l==n)
    {
        cout<<s<<"\n";return;
    }
    for(int i=l;i<n;i++)
    {
        swap(s[l],s[i]);

        solve(s,l+1,n);

        swap(s[l],s[i]);

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string s;
    cin>>s;
    solve(s,0,s.size());
}
