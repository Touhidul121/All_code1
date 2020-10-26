#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,extra;
    cin>>x;
    string s1,s2;
    cin>>s1>>s2;
    int match=0,n=s1.size();

    for(int i=0;i<n;i++)
        if(s1[i]==s2[i])
        match++;
     if(x<match)extra=match-x;
     else
        extra=x-match;
    cout<<min(x,match)+n-(min(x,match)+extra)<<"\n";
}
