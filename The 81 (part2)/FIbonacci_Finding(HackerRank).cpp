#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll ar[3],I[3][3],A[3][3];

void mul(ll a[][3],ll b[][3],ll dim)
{
    ll res[dim+1][dim+1];

    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            res[i][j]=0;
            for(int k=1;k<=dim;k++)
            {
                ll x=(a[i][k]*b[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }
    for(int i=1;i<=dim;i++)
        for(int j=1;j<=dim;j++)
        a[i][j]=res[i][j];
}

long long power(int n,int dim)
{
    if(n<=2)
        return ar[n];
    I[1][1]=I[2][2]=1;
    I[1][2]=I[2][1]=0;

    A[1][1]=0;
    A[1][2]=A[2][1]=A[2][2]=1;
    n=n-1;
    while(n>0)
    {
        if(n&1)
            mul(I,A,2), n--;
        n=n/2;
        mul(A,A,2);
    }
    long long x=(ar[1]*I[1][1]+ar[2]*I[2][1])%mod;
    return x;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    n++;
    ar[1]=a, ar[2]=b;
    long long res=power(n,2);
    cout<<res<<"\n";
    }
}
