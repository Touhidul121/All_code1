#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;
    if(s==0)
    {
    if(m==1)
        cout<<0<<" "<<0<<"\n";
        else
            cout<<-1<<" "<<-1<<"\n";
    }
    else
    {
        string ans;
        while(m--)
        {
            ans+=min(9,s)+'0';
            s-=min(9,s);
        }
     if(s>0)
     {cout<<-1<<" "<<-1<<"\n";return 0;}
        string ans1=ans;
        reverse(ans.begin(),ans.end());
        if(ans[0]=='0'){
          ans[0]='1';

          int i=1;
          while(i<ans.size())
          {
              if(ans[i]>'0')
              {
                  ans[i]=(ans[i]-'0'-1)+'0';
                  break;
              }
              i++;
          }


        }

        cout<<ans<<" ";

        cout<<ans1<<"\n";
    }
}
