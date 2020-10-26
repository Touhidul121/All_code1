#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
   int n,a;
   cin>>n;
   map<ll,ll>mp,mp1;
   vector<ll>v;

   for(int i=0;i<n;i++)
   {
       cin>>a;
       v.push_back(a);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n-1;i++){
   for(int j=i+1;j<n;j++)
   {
    if(v[i]*2==v[j])
    {
        mp[v[i]]=v[j];
        v[i]=-1;
        v[j]=-1;
        break;
    }
   }
   for(int j=n-1;j>=1;j--)
   {
   for(int i=j-1;i>=0;i--)
   {
       if(v[j]%3==0){
       if(v[j]/3==v[i])
       {
           mp1[v[j]]=v[i];
           v[j]=-1;
           v[i]=-1;
           break;
       }
       }
   }

   }
   for(auto x:mp)
    cout<<x.first<<" "<<x.second<<"\n";
   for(auto x:mp1)
    cout<<x.first<<" "<<x.second<<"\n";
   }
}
