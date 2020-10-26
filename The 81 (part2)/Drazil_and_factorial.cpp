#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    string s1,res;

    cin>>s1;
    string s[]={"","","2","3","322","5","53","7","7222","7332"};
    for(int i=0;i<n;i++)
    {
        x=s1[i]-'0';
        res+=s[x];
    }
    sort(res.rbegin(),res.rend());
    cout<<res<<"\n";


}
