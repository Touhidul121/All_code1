#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

    ll n,k,step=0;
    cin>>n>>k;

    while(n>k)
    {
      if(n%k==0&&n>=k)
      {
          n=n/k;
          step++;
      }
      else if((n%k)!=0||n<k)
      {

          step+=(n%k);
          n-=n%k;
      }

    }
    if(n%k==0)
    cout<<step+2<<endl;
    else
        cout<<step+(n-0)<<endl;
    }
}
