#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
        cout<<-1<<"\n";
        else if(n==m)
            cout<<m<<"\n";
        else
        {
            int ans;
            if(n%2==0)
            ans=n/2;
            else
                ans=(n/2)+1;
            if(ans%m!=0)
            {
                ans+=(m-ans%m);
            }
            cout<<ans<<"\n";

        }
}
