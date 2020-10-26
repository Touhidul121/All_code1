#include<bits/stdc++.h>
using namespace std;
multiset<int>v;


int main()
{
int    a=1,b=1,c=0;
    v.insert(a);
    v.insert(b);
  while(c<10000)
  {
   c=a+b;
   v.insert(c);
   a=b;
   b=c;
  }

  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      if(v.count(i)>0)
        cout<<'O';
      else
        cout<<'o';
  }
  cout<<endl;
}
