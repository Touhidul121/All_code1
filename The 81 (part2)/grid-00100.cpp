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
        int n,k;
        cin>>n>>k;
        vector<vector<int>>v;
        v.resize(n,vector<int>(n));

        if(k%n==0)cout<<0<<"\n";
        else cout<<2<<"\n";

        for(int i=0;i<n && k;i++)
        {
            for(int j=0;j<n && k;j++)
            {
                int x=j;
                int y=(i+j)%n;
                v[x][y]=1;
                k--;

            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v[i][j];
            }
            cout<<"\n";
        }
    }
}
