#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,g,a,s=0;
    cin>>n>>g;



    for(int i=0;i<n;i++)
    {
        cin>>a;
        s+=a;
    }
    cout<<(s+g-1)/g<<"\n";
}
