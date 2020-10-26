#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v1(n+1),v2(n+1),v;
    set<int>st;
    int ans=0,ans1=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
v.push_back(a);
st.insert(a);
        if(a==0)
            ans++;
            if(a==1)
                ans1++;
        v1[i]=ans;
        v2[i]=ans1;

    }
 if(st.size()==1&&*st.rbegin()==1)
 {
     cout<<n-1<<"\n";
 }
else{
    int cnt0=0,cnt1=0,loc1,loc2,mx=0,x=0;
    for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cnt0=v1[i]-v1[j-1];
                cnt1=v2[i]-v2[j-1];

                if(mx<cnt0-cnt1)
                {
                    mx=cnt0-cnt1;
                    x=cnt0;
                    loc1=j;
                    loc2=i;
                }
            }
        }

        for(int i=0;i<loc1-1;i++){

            if(v[i]==1)
                x++;
                    }

        for(int j=loc2;j<n;j++){
            if(v[j]==1)
        x++;
        }
        cout<<x<<"\n";

}}
