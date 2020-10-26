#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)cin>>a[i];

    int mn=INT_MAX;
    int j=0,sum=0;

    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      while(sum>=k)
      {
          mn=min(mn,i-j+1);
          sum-=a[j];
          j++;
      }
    }
    cout<<mn<<"\n";
}
