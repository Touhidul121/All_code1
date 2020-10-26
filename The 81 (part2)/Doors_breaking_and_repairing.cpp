#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,a;
    cin>>n>>x>>y;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(x>y)
        cout<<n<<"\n";
    else
    {
        sort(v.begin(),v.end());
        int cnt=0,i=0;
       while(v[i]<=x && i<n)
            cnt++ , i+=2;
       cout<<cnt<<"\n";
    }
}
