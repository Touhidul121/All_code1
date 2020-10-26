#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--)
    {
      int m,cnt1=0,cnt2=0,cnt3=0;
      cin>>m;
      bool flag=false;
      string a,b;
      for(int i=0;i<m;i++)
      {

        cin>>a>>b;
        if(a!="soda"&&a!="water")
            flag=true;
        if(b!="wine")
            flag=true;
            if(a=="soda")
                cnt1++;
            if(a=="water")
                cnt2++;
            if(b=="wine")
                cnt3++;
      }

      cout<<"Case "<<++cs<<": ";
      if(!flag&&(cnt1==m/2&&cnt2==m/2&&cnt3==m))
        cout<<"Yes"<<"\n";
      else
        cout<<"No"<<"\n";
    }
}
