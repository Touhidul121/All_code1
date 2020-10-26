#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    multiset<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    int m=0,p=0;
    for(auto x:s)
    {
        if(x>m)
        {
            m=x;
        }

    }

    for(int i=1;i<=m;i++)
    {

        if(m%i==0){

            s.erase(s.find(i));
        }
    }
    for(auto x:s)
        cout<<x<<" ";

       cout<<m<<" "<<*s.rbegin()<<endl;


}
