#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,a;
    cin>>n>>m>>k;

    vector<int>v;
    for(int i=0;i<m+1;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int r=v[m],x,y,count=0,frn=0;


    for(int i=0;i<m;i++)
    {
       x=max(v[i],r);
       y=min(v[i],r);
       count=0;

       while(x)
       {
           if((x&1)!=(y&1))
           count++;
           x=x>>1;
           y=y>>1;
       }
       if(count<=k)
        frn++;

       }

    cout<<frn<<"\n";
}

