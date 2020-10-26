#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        n-=2;
        if(n<=0)cout<<1<<"\n";
        else
        {
            int i=1;
            while(true)
            {
                i++;
                if(n-x<=0)
                    break;
                n-=x;
            }
            cout<<i<<"\n";
        }
    }
}
