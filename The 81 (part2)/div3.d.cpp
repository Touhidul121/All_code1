#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

     map<ll,vector<int>>mp;
     vector<pair<int,int>>ans;
     ll sum=0;
     for(int i=0;i<n;i++)
     {
       sum+=arr[i];
       if(sum==0)
       ans.push_back({0,i});

       if(mp.find(sum-0)!=mp.end())
       {
              for(int j=0;j<mp[sum].size();j++)
               ans.push_back({mp[sum][j]+1,i});

       }
       mp[sum].push_back(i);
     }
     for(int i=0;i<ans.size();i++)
        swap(ans[i].first,ans[i].second);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        swap(ans[i].first,ans[i].second);

    int res=0,prev=0;
     for(int i=0;i<ans.size();i++)
     {

         if(ans[i].first>=prev)
         {
             res++;
             prev=ans[i].second;
         }
     }
     cout<<res<<"\n";
}
