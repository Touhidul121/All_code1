#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        map<ll,pair<int,int>>mp;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mp[nums[i]+nums[j]]={i,j};
            }
        }
        set<set<int>>st;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ll sum=nums[i]+nums[j];
                if(mp.find(target-sum)!=mp.end())
                {
                   cout<<"goes"<<"\n";
                    pair<int,int>p=mp[target-sum];
                    set<int>st1;
                    st1.insert(nums[p.first]);st1.insert(nums[p.second]);
                    st1.insert(nums[i]);st1.insert(nums[j]);
                    st.insert(st1);
                }
            }
        }
        vector<vector<int>>ans;
        for(set<int> x:st)
        {
            vector<int>v;
            for(auto p:x)
                v.push_back(p);


            ans.push_back(v);
        }
        return ans;
    }
};

int main()
{
    int n,a,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);
    Solution ob;
    vector<vector<int>>ans=ob.fourSum(v,x);
    cout<<ans.size()<<"\n";
}
