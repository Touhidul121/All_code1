#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans=0;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    for(int i=0;i<n;i++)
    {
         cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        for(int j=i;j<n;j++)
        {
            if(s[j]=='A')cnt1++;
            else if(s[j]=='T')cnt2++;
            else if(s[j]=='C')cnt3++;
            else if(s[j]=='G')cnt4++;
            if(cnt1==cnt2 &&(cnt3==cnt4))ans++;
        }
        //cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<"\n";
    }
    cout<<ans<<"\n";
}
