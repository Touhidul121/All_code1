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
        int n,m;
        cin>>n>>m;
        int a,b,c,d;
        bool f2=false;


        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c>>d;
            if(c==b)
                f2=true;
        }
        if(m&1 || f2==false)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
