#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans=INT_MAX,index=0;
    cin>>n>>k;
  vector<int> v(500005);

    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        v[i]=v[i]+v[i-1];//prefix sum
    }
    /*here i denotes current position of prefix sum.It has been created because
    of the contribution of previous k consecutive elements so if we subtract
    a[i-k](prefix sum upto i-k th prefix sum then we will get the sum of
           previous k consecutive elements
           */

    for(int i=k;i<=n;i++)
    {
        if(v[i]-v[i-k]<ans)
        {
            ans=v[i]-v[i-k];
            index=i-k;
        }
    }
    cout<<index+1<<endl;
}
