#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string s[n];
    int arr[n][n],pref[n+1][n+1];
    memset(pref,0,sizeof(pref));
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='*')
                arr[i][j]=1;
            else
                arr[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
          pref[i][j]=arr[i-1][j-1]+pref[i][j-1]+pref[i-1][j]-pref[i-1][j-1];
      }
    }

    int x1,y1,x2,y2;
    while(q--)
    {
        cin>>y1>>x1>>y2>>x2;
        cout<<pref[y2][x2]-pref[y1-1][x2]-pref[y2][x1-1]+pref[y1-1][x1-1]<<"\n";

    }
}
