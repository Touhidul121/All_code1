#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,s;
    cin>>n>>s;

    if(s>=2*n)
    {

    cout<<"YES"<<"\n";
    for(int i=1;i<=n-1;i++)
        cout<<2<<" ";
    cout<<s-(2*(n-1))<<"\n";
    cout<<1<<"\n";
    }
    else
        cout<<"NO"<<"\n";


}
