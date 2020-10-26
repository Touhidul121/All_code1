#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    if(m==0)
        cout<<1<<endl;
    else
    {
        int x=n-m;
        if(x>m)
            x=m;
        cout<<x<<endl;
    }
}
