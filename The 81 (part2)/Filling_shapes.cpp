#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n&1)
        cout<<0<<endl;
    else
    {
      long long int  ans=1;
      n=n/2;
        for(int i=0;i<n;i++)
            ans*=2;
        cout<<ans<<endl;
    }
}
