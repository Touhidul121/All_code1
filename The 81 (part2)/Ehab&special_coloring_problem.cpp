#include<iostream>
#include<math.h>
#include<vector>
#include<cmath>
using namespace std;
int a[1000000];
int main()
{
    int n=100000;
    int sq=sqrt(n);
    vector<int>v,v1(1000000);
    for(int i=4;i<=n;i+=2)
    {
        a[i]=1;
    }
    for(int i=3;i<=sq;i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=n;j=j+i)
                a[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0){
            v.push_back(i);

        }

    }
    int k;
    cin>>k;
    int cnt=0;
    int j=0;

    for(int i=2;i<=k;i++)
    {
        if(v[j]==i)
        {
            cnt++;
            v1[i]=cnt;
            j++;
        }
    }
    int cnt1=0;
    for(int i=2;i<=k;i++)
    {
        if(v1[i]==0)
        {
            cnt1++;
            v1[i]=cnt1;
        }
        else
        {
            cnt1=0;
        }
    }
    for(int i=2;i<=k;i++)
        cout<<v1[i]<<" ";

}

