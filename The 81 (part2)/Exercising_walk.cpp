#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        bool flag1=false,flag2=false,flag3=false,flag4=false;
        if(b-a>x2-x||a-b>x-x1)
            flag1=true;
        if(d-c>y2-y||c-d>y-y1)
        flag2=true;
        if(x1==x2&&a+b>0)
            flag3=true;
        if(y1==y2&&c+d>0)
            flag4=true;
        if(flag1||flag2||flag3||flag4)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
