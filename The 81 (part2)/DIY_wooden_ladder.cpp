#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int x=0;


        x=v[n-2]-1;

        cout<<min(x,n-2)<<"\n";
    }
}
