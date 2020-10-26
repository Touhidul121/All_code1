#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        map<int,vector<int>>mp;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            mp[a].push_back(i+1);
        }
        if(mp.size()==1)
            cout<<"NO"<<"\n";
        else
        {

            int cnt=0;
            int x,y;
            vector<int>v2;
            for(auto p:mp)
            {
                if(cnt==0)
                {
                    x=p.second[0];
                    v2=p.second;
                }
                if(cnt==1)
                {
                    y=p.second[0];
                }
                cnt++;
            }
            cnt=0;
            int cnt1=0;
            vector<pair<int,int>>v1;
            for(auto p:mp)
            {
                if(cnt>0)
                {
                    vector<int>v=p.second;
                    for(int i=0;i<v.size();i++)
                    {
                        v1.push_back({x,v[i]});
                        cnt1++;
                    }
                }
                cnt++;
            }
            cnt=0;
            for(int i=0;i<v2.size();i++)
            {
                if(cnt>0){
                v1.push_back({v2[i],y});
                cnt1++;
                }
                cnt++;
            }
            if(cnt1!=n-1)
            {
                cout<<"NO"<<"\n";
            }
            else
            {
             cout<<"YES"<<"\n";
                for(auto x:v1)
                {
                    cout<<x.first<<" "<<x.second<<"\n";
                }
            }

        }
    }
}
