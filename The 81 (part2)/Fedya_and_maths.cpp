#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=s[s.size()-1]; // a number is divisible by 4 if the number made
                         // by the last two digits is divisible by 4
    int b=s[s.size()-2];
    if((b*10+a)%4==0)
        cout<<4<<"\n";
    else
        cout<<0<<"\n";
}
