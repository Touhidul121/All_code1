#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,m=0;
    cin>>n;
    multiset<int> s;

    for(int i=0;i<n;i++)
    {
      cin>>a;
      if(m<a)
      {
          m=a;
      }
      s.insert(a);
    }

    for(int i=1;i<=m;i++)
    {

    if(m%i==0)
            s.erase(s.find(i));
    }

    cout<<m<<" "<<*s.rbegin()<<endl;
}
