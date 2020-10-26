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
        set<int>st;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            st.insert(a);
        }
        if(st.size()==1)
            cout<<-1<<"\n";
        else
        {
            int x=*max_element(v.begin(),v.end());
            int ans=-1;
            bool f=false;

            for(int i=0;i<n-1;i++)
            {
                if(v[i]==x && v[i+1]<x)
                {
                   ans=i+1;f=true;break;

                }
            }
            if(!f)
            {
                for(int i=1;i<n;i++)
                {
                    if(v[i]==x && v[i-1]<x)
                    {
                        ans=i+1;break;
                    }
                }
            }
            cout<<ans<<"\n";
        }
    }
}
