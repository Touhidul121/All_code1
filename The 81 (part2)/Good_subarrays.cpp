#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long sum=0;
        map<long long ,long long>mp;
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=s[i]-'0';
            sum--;
            if(sum==0)cnt++;
            cnt+=mp[sum-0];
            mp[sum]++;
        }
        cout<<cnt<<"\n";
    }
}
