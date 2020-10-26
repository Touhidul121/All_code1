#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        string s,s1,x;
        cin>>s>>s1;

        vector<string>v,v1;
        int j=0,flag=0;
    for(int i=0;i<s.size();i++)
    {
        x+=s[i];
        while(s[i]==s[i+1]&&i<s.size())
        {
            x+=s[i+1];
            i++;
        }
            v.push_back(x);
            x.clear();
    }
    for(int i=0;i<s1.size();i++)
    {
        x+=s1[i];
        while(s1[i]==s1[i+1]&&i<s1.size())
        {
            x+=s1[i+1];
            i++;
        }
            v1.push_back(x);
            x.clear();
    }
    if(v1.size()!=v.size())
        cout<<"NO"<<endl;
    else
    {
        char c,d;
        for(int i=0;i<v.size();i++)
        {
            c=*v[i].begin();
            d=*v1[i].begin();

        if(c!=d||v1[i].size()<v[i].size())
            flag++;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


    }
}
