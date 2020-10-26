#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    string s,ans="";
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='0'||s[i]=='1')continue;
        else if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7')
            ans+=s[i];
        else if(s[i]=='4')
            ans+="223";
        else if(s[i]=='6')
            ans+="35";
        else if(s[i]=='8')
            ans+="2227";
        else
            ans+="7332";

    }
    sort(ans.rbegin(),ans.rend());
    cout<<ans<<"\n";

}
