#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;

    for(int i=1;i<n-1;i++)
    {
        if(s[i]!=s[i-1])
            continue;
        else
        {
            if(s[i]==s[i+1])
               {
                if(s[i]=='R')
                    s[i]='B';
                    else if(s[i]=='G')
                        s[i]='R';
                    else if(s[i]=='B')
                        s[i]='R';
               }
               else
               {
                   if(s[i]=='R'&&s[i+1]=='G')
                           s[i]='B';
                    else if(s[i]=='G'&&s[i+1]=='R')
                        s[i]='B';
                    else if(s[i]=='B'&&s[i+1]=='R')
                        s[i]='G';
                    else if(s[i]=='R'&&s[i+1]=='B')
                        s[i]='G';
                    else if(s[i]=='B'&&s[i+1]=='G')
                        s[i]='R';
                    else if(s[i]=='G'&&s[i+1]=='B')
                        s[i]='R';
                        }
                    cnt++;
        }
    }
    if(s[n-1]==s[n-2])
    {
        cnt++;
        if(s[n-1]=='R')
            s[n-1]='B';
        else if(s[n-1]=='G')
            s[n-1]='B';
        else
            s[n-1]='R';
    }
    cout<<cnt<<"\n";
    cout<<s<<"\n";
}
