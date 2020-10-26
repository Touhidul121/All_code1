#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x=s.size();
    int a,b;
    a=s[x-1];
    b=s[x-2];
    if((b*10+a)%4==0)
    cout<<4<<endl;
    else
        cout<<0<<endl;
}
