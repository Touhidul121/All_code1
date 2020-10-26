#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
ll arr[5002];
ll pref[5003];
ll dp[5003][5003];
ll solve(int pos,int k)
{
    if(k==0)return 0;
    if(pos>n)return INT_MIN;
    if(dp[pos][k]!=-1)return dp[pos][k];
    ll sum1=0,sum2=0;
    if(pos+m-1 <= n){
        ll sm = pref[pos+m-1]-pref[pos-1];
        sum1 = max(sum1, sm + solve(pos+m, k-1));
    }
    sum2 = max(sum2, solve(pos+1, k));

    //cout<<sum1<<" "<<" "<<sum2<<"\n";

    return dp[pos][k]=max(sum1,sum2);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        pref[i+1]=pref[i]+arr[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(1,k);

}
