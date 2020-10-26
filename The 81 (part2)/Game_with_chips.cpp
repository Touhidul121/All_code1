#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    int a,b;
    k=2*k;
    while(k--)
    {
        cin>>a>>b;
    }
    cout<<n*m+n+m-3<<"\n";

    for(int i=0;i<n-1;i++)
        cout<<'U';
    for(int i=0;i<m-1;i++)
        cout<<'L';

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            for(int j=0;j<m-1;j++)
            cout<<'R';
        else
            for(int j=0;j<m-1;j++)
            cout<<'L';

        if(i<n-1)cout<<'D';
    }
    cout<<"\n";
}
