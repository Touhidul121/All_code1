#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    stack<char>stk;

    for(int i=0;i<s.size();i++)
    {
        if(!stk.empty()&& stk.top()==s[i])
        {
            cnt++;
            stk.pop();
        }
        else
            stk.push(s[i]);
    }
    if(cnt&1)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
}
