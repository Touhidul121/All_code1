#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            x=i==j;
            y=i==n-j-1;
            if(x||y||j==n/2||i==n/2)
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
