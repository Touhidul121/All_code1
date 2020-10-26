#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d,a1,a2;
        cin>>n;
        set<int>st;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c>>d;
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            v.push_back(d);
        }
        bool f=false;
        sort(v.begin(),v.end());
        for(int i=0,j=4*n-1;i+3<=j;i+=2,j-=2)
        {
            if(v[i]!=v[i+1] || v[j]!=v[j-1])
               {
                 f=true;
                 break;
               }
            a1=v[i]*v[j];
            a2=v[i+1]*v[j-1];
            st.insert(a1);
            st.insert(a2);
        }
        if(f)
            cout<<"NO"<<"\n";
        else{
        if(st.size()==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
        }

    }
}
