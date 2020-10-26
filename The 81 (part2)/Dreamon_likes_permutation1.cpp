#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)cin>>arr[i];

        int mx=*max_element(arr+1,arr+n+1);
        int mx1=n-mx;

        map<int,int>mp;
        int ind1,ind2;
        bool f1=false,f2=false,f3=false,f4=false;

        for(int i=1;i<=n;i++)
        {
            mp[arr[i]]++;
            if(mp.size()==mx && mp.rbegin()->first==mx)
            {
                ind1=i;f1=true;break;
            }
        }
        if(f1)
        {
        mp.clear();
        for(int i=ind1+1;i<=n;i++)
        {
            mp[arr[i]]++;
            if(mp.size()==mx1 && mp.rbegin()->first==mx1)
            {

                f2=true;break;
            }
        }
        }
        mp.clear();
        for(int i=n;i>=1;i--)
        {
            mp[arr[i]]++;
            if(mp.size()==mx && mp.rbegin()->first==mx)
            {
                ind2=i;f3=true;break;
            }
        }
        if(f3)
        {
            mp.clear();
            for(int i=ind2-1;i>=1;i--)
            {
                mp[arr[i]]++;
                if(mp.size()==mx1 && mp.rbegin()->first==mx1)
                {
                    f4=true;break;
                }
            }
        }

        if(f2==false && f4==false)cout<<0<<"\n";
        else if(f2==true && f4==true)
        {
            if(mx==mx1)cout<<1<<"\n"<<mx<<" "<<mx1<<"\n";
            else cout<<2<<"\n"<<mx<<" "<<mx1<<"\n"<<mx1<<" "<<mx<<"\n";
        }
        else if(f2==true)cout<<1<<"\n"<<mx<<" "<<mx1<<"\n";
        else if(f4==true)cout<<1<<"\n"<<mx1<<" "<<mx<<"\n";
    }
}
