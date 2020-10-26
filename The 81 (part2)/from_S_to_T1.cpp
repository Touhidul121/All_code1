#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        bool f=false;

        int i=0,j=0;

        while(i<t.size())
        {
            if(t[i]==s[j])
                j++;
            if(j==s.size())
            {
                f=true;break;
            }
            i++;
        }
        if(!f)cout<<"NO"<<"\n";
        else
        {
            string temp=s;
            temp+=p;
            map<char,int>mp1,mp2;

            for(int i=0;i<temp.size();i++)mp1[temp[i]]++;
            for(int i=0;i<t.size();i++)mp2[t[i]]++;

            bool f1=true;

            for(auto x:mp2)
            {
                if(mp2[x.first]>mp1[x.first])
                {
                    f=false;break;
                }
            }
            if(!f)cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }
    }
}
