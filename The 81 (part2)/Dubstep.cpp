#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="WUB";
    string s;
    cin>>s;
    vector<string> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            cout<<" ";
            i+=2;
            continue;
        }
        else
            cout<<s[i];
    }
}