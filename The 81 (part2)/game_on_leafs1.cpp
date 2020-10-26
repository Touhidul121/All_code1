#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x;
        vector<int>v(n+1);
        for(int i=1;i<=n-1;i++)
        {
            cin>>a>>b;
            v[a]++;
            v[b]++;
        }

        if(n==1)
            cout<<"Ayush"<<"\n";
       else if(v[x]==1)
            cout<<"Ayush"<<"\n";
            else if(n&1)
                cout<<"Ashish"<<"\n";
                else
                cout<<"Ayush"<<"\n";

    }
}
