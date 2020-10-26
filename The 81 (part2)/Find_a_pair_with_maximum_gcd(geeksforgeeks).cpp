#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    int high=*max_element(v.begin(),v.end());

    int cnt[high+1]={0};

    for(int i=0;i<n;i++)
        cnt[v[i]]++;
    int count=0,ans=0;

    for(int i=high;i>=1;i--)
    {
        count=0;
        for(int j=i;j<=high;j+=i)
        {
            if(cnt[j]>=2)
            {
                cout<<j<<"\n";
                return 0;
            }
            if(cnt[j]==1)
                count++;

            if(count==2)
            {
                cout<<i<<"\n";
                return 0;
            }
        }
    }

}
