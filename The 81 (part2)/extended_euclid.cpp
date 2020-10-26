#include<bits/stdc++.h>
using namespace std;

int extended_euclid(int a,int b,int &x,int &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    int x1,y1,gcd;
    gcd=extended_euclid(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    int gcd=extended_euclid(a,b,x,y);
    cout<<x<<" "<<y<<" "<<gcd<<"\n";
}
