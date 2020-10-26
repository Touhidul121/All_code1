#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        cin>>n>>m;

        vector<int>v,v1;
        vector<pair<int,int>>v2;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            v1.push_back(a);
            v2.push_back(make_pair(a,i+1));
        }

        if(m<n)
            cout<<-1<<"\n";
        else
        {
            sort(v1.begin(),v1.end());
            long long sum=0;
            for(int i=0;i<n-1;i++)
            {
                sum+=v1[i]+v1[i+1];
            }
            sum+=v1[0]+v1[n-1];
            cout<<sum<<"\n";
      sort(v2.begin(),v2.end());
            for(int i=0;i<n-1;i++)
            {
            cout<<v2[i].second<<" "<<v2[i+1].second<<"\n";
            }
            cout<<v2[n-1].second<<" "<<v2[0].second<<"\n";
        }
    }
}
