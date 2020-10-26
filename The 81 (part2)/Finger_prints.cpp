#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,x,r;
    cin>>n>>m;
    vector<int> v,v1;
    vector<int>::iterator it,it1;

    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }

    for(int i=0;i<m;i++)
    {
        cin>>b;
        v1.push_back(b);
    }
    for(int i=0;i<n;i++)
    {
        x=v[i];
        it=v1.begin();
        it1=v1.end();
        r=binary_search(it,it1,x);
        cout<<r<<endl;
        if(r==1)
            cout<<v[i]<<" ";
    }
    cout<<endl;
}
