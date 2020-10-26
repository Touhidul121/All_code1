#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0,cnt2=0,loc1=0,loc2=0;
        bool f1=true;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='>')
                cnt1++;
            else
                break;

        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<')
                cnt2++;
            else
                break;
        }
        cout<<min(cnt1,cnt2)<<"\n";
    }
}
