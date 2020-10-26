#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    bool f=false;
    unordered_set<int>st;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>ar[i][j];

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            st.insert(ar[i][j]);
            if(ar[i][j]==ar[i+1][j])f=true;
        }
        if(st.size()>1)f=true;
        st.clear();
    }
    for(int i=0;i<m;i++)
    {
        st.insert(ar[n-1][i]);
    }
    if(st.size()>1)f=true;
    if(f)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
}
