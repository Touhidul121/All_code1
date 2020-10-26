#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,x;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        x=s[i]-'0';
        if(x%2==0)
            count+=(i+1);
    }
    cout<<count<<endl;
}
