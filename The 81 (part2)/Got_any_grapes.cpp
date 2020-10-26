#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,rest1=0,rest2=0;
    bool flag1=false,flag2=false,flag3=false;
    int a,b,c;
    cin>>x>>y>>z>>a>>b>>c;

    if(a<x)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        flag1=true;
        rest1=a-x;
    }
    if(rest1+b<y)
    {

        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        flag2=true;
        rest2=(rest1+b)-y;
    }
    if(rest2+c<z)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
        flag3=true;

    if(flag1&&flag2&&flag3)
        cout<<"YES"<<endl;
}
