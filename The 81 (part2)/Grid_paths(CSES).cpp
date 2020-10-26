#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

int main(){
        ll n;
        cin>>n;
        string ar[n];

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        ll dp[n+1][n+1];

       if(ar[n-1][n-1]=='.') dp[n][n]=1;
       else
        dp[n][n]=0;

        for(int i=n-1;i>=1;i--)
        {
            if(ar[n-1][i-1]=='*' || dp[n][i+1]==0)
                dp[n][i]=0;
            else
                dp[n][i]=1;
        }
        for(int i=n-1;i>=1;i--)
        {
            if(ar[i-1][n-1]=='*' || dp[i+1][n]==0)
                dp[i][n]=0;
            else
                dp[i][n]=1;
        }

        for(int i=n-1;i>=1;i--)
        {
            for(int j=n-1;j>=1;j--)
            {
                if(ar[i-1][j-1]=='*')
                    dp[i][j]=0;
                else
                    dp[i][j]=(dp[i+1][j]+dp[i][j+1])%mod;
            }
        }
        cout<<dp[1][1]<<"\n";
    }


