#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxN 70
int n,m,k;
int arr[maxN][maxN];
int sum=0,ans=0;

void solve(int sum,int i,int j,int cnt)
{
    if(i>n-1)
        return ;


    if(sum%k==0)
    {

        ans=max(ans,sum);


    }

           if(j<m){
                    if(cnt>0)
            solve(sum+arr[i][j],i,j+1,cnt-1);

            solve(sum,i,j+1,cnt);
            }
            solve(sum,i+1,0,m/2);




}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //memset(dp,-1,sizeof(dp));

    solve(0,0,0,m/2);

    cout<<ans<<"\n";
}
