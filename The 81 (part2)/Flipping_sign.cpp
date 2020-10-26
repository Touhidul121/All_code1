#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,k=0;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            a.push_back(b);
        }
        for(int i=0;i<n;i+=2)
        {
            if(a[i]>=0)
                a[i]=-a[i];
        }
        for(int i=1;i<n;i+=2)
        {
            if(a[i]<=0)
                a[i]=-a[i];
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}
