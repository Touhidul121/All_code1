#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
            cin>>a , v.push_back(a);


        if(v[0]<v[n-1])cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
