#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 ll n,a;
 cin>>n;
 vector<ll>v,ans;
 long long sum=0,sum1=0;
multiset<ll>st;
 for(ll i=0;i<n;i++)
 {
     cin>>a;
     v.push_back(a);
     st.insert(a);
     sum+=a;
 }
if(st.size()==1)
{
  cout<<0<<"\n";
}
else{
 for(ll i=0;i<n;i++)
 {
  sum1=sum-v[i];
  if(sum1&1)
        continue;
  else
  {
     ll x=sum1/(ll)2;{
         if(x==v[i])
            st.erase(st.find(x));
      if(st.find(x)!=st.end()){
        ans.push_back(i+1);
        if(x==v[i])
            st.insert(x);
      }
     }
  }
 }
 cout<<ans.size()<<"\n";
 for(int x:ans)
    cout<<x<<" ";
 cout<<"\n";
}
}
