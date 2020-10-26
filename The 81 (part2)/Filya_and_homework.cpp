#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,y,z;
    cin>>n;
    set<int>st;
    set<int>::iterator it;
    for(int i=1;i<=n;i++)
    {
        cin>>a;st.insert(a);
    }
    if(st.size()<=2)
        cout<<"YES"<<"\n";
    else if(st.size()==3)
    {
       it=st.begin();x=*it;
       it++;y=*it;
       it++;z=*it;
       if(y-x==z-y)cout<<"YES"<<"\n";
       else cout<<"NO"<<"\n";
    }
    else cout<<"NO"<<"\n";
    return 0;
}
