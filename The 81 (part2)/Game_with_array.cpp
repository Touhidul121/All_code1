#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 ll n,s;
 cin>>n>>s;
 if(s>=2*n)
 {
     cout<<"YES"<<"\n";
     for(int i=1;i<=n-1;i++)
     {
         cout<<2<<" ";
         s-=2;
     }
     cout<<s<<"\n";
     cout<<1<<"\n";
 }
 else
    cout<<"NO"<<"\n";
}
