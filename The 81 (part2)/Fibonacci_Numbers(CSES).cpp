#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;
ll ar[3]={0,1,1};
ll I[3][3],A[3][3];

void mul(ll A[3][3],ll B[3][3],ll n)
{
    ll res[3][3];
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            res[i][j]=0;
            for(int k=1;k<=2;k++)
            {
                ll x=(A[i][k]*B[j][k])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}
void getfib(ll n)
{
 I[1][1]=I[2][2]=1;
 I[1][2]=I[2][1]=0;
 A[1][1]=0;
 A[1][2]=A[2][1]=A[2][2]=1;
 n--;
 while(n>0)
 {
     if(n&1)
     {
         mul(I,A,2);n--;
     }
     n=n/2;
     mul(A,A,2);
 }
 ll x=(ar[1]*I[1][1]+ar[2]*I[1][2])%mod;
 cout<<x<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin>>n;
    if(n<=1)
        cout<<n<<"\n";
    else if(n==2)
        cout<<1<<"\n";
    else
    {
    getfib(n);
    }
}
