#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        if(s[i]==s[i-1])
        {        cnt++;
                 if(s[i-1]=='R'&&s[i+1]=='G')s[i]='B';
            else if(s[i-1]=='R'&&s[i+1]=='B')s[i]='G';
            else if(s[i-1]=='R'&&s[i+1]=='R')s[i]='B';
            else if(s[i-1]=='G'&&s[i+1]=='R')s[i]='B';
            else if(s[i-1]=='G'&&s[i+1]=='B')s[i]='R';
            else if(s[i-1]=='G'&&s[i+1]=='G')s[i]='R';
            else if(s[i-1]=='B'&&s[i+1]=='R')s[i]='G';
            else if(s[i-1]=='B'&&s[i+1]=='G')s[i]='R';
            else if(s[i-1]=='B'&&s[i+1]=='B')s[i]='R';
        }
    }
    if(s[n-2]==s[n-1])
    {        cnt++;
             if(s[n-2]=='R')s[n-1]='B';
        else if(s[n-2]=='G')s[n-1]='R';
        else if(s[n-2]=='B')s[n-1]='G';
    }
    cout<<cnt<<"\n";
    cout<<s<<"\n";
}
