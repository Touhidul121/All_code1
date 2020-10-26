#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,s,k;
    cin>>m>>s;

    if(s==0)
    {
        if(m==1)
            cout<<"0 0\n";
        else
            cout<<"-1 -1\n";
    }
    else
    {
       string maxi="",mini="";
       for(int i=1;i<=m;i++)
       {
           k=min(9,s);
           maxi.push_back('0'+k);
           mini.push_back('0'+k);
           s-=k;
       }
       if(s>0)
        cout<<"-1 -1\n";
       else
       {
           reverse(mini.begin(),mini.end());

           if(mini[0]!='0')
            cout<<mini<<" "<<maxi<<"\n";
           else
           {
               int j=1;
               mini[0]='1';

               while(mini[j]=='0'&&j<m)
               {
                   j++;
               }

               mini[j]='0'+(mini[j]-'0'-1);
               cout<<mini<<" "<<maxi<<"\n";
           }
       }
    }
}

