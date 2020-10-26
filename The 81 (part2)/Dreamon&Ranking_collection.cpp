#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int n,x,a,count=0,count1=1;
    cin>>n>>x;

    vector<int>v(200);

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v[a]++;
    }

    for(int i=1;i<=200;i++)
    {
       if(v[i]==0)
       {
            v[i]++;
           count++;
       }
        if(count==x)
            break;
    }


    for(int i=1;i<=200;i++)
    {

       if(v[i]>0&&v[i+1]>0)
       {
           count1++;
        }
       if(v[i]!=0&&v[i+1]==0)
           break;
   }
    cout<<count1<<endl;


}
}
