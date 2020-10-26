#include<bits/stdc++.h>
using namespace std;

int getans(int n)
{
    int cnt=0;
    while(n)
    {
        cnt++;
        n=n&(n-1); //brian carnigan to count set bit
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m,k,a;
    cin>>n>>m>>k;

    vector<int>v;
    for(int i=0;i<m+1;i++)cin>>a , v.push_back(a);

    int y=v[m],ans=0;

    for(int i=0;i<m;i++)
    {
        if(getans(y^v[i])<=k) // duiti sonkhar mistmatch sonkha= tader xor a set bit sonkha
            ans++;
    }
    cout<<ans<<"\n";
}
