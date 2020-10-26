#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int n,count=0;
    scanf("%d",&n);
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')%2==0)
            count+=i+1;
    }
    cout<<count<<endl;
}
