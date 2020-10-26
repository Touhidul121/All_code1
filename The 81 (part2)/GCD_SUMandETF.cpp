#include<bits/stdc++.h>
using namespace std;

#define maxN (int)1e5+1

int phi[maxN];


void getphi(int n){
    for(int i=1;i<=n;i++)
        phi[i]=i;

    for(int i=2;i*i<=n;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<=n;j+=i)
            {
                phi[j]=phi[j]/i;
                phi[j]=phi[j]*(i-1);
            }
        }
    }
}


int main()
{
    getphi(maxN);

    int n;
    cin>>n;

    int ans=0;
    int d,d1;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
            {
                d=i;
                ans+=phi[n/d];
                cout<<d<<" --> "<<phi[n/d]<<"\n";

            }
            else
            {
                d=i;
                d1=n/i;
                ans+=phi[n/d];
                ans+=phi[n/d1];
                cout<<d<<" --> "<<phi[n/d]<<"\n";
                cout<<d1<<" --> "<<phi[n/d1]<<"\n";
            }
        }
    }
    cout<<ans<<"\n";
}
