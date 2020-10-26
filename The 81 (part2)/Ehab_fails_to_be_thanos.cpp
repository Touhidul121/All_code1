#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0,sum1=0;
    cin>>n;
    vector<int>v;

    for(int i=0;i<2*n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    for(int i=n;i<2*n;i++)
        sum1+=v[i];
        //cout<<sum<<" "<<sum1<<endl;
    if(sum==sum1)
        cout<<-1<<endl;
    else
    {
        for(int i=0;i<2*n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
