#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        int odd=0,ev=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            if(a&1)
                odd++;
            else
                ev++;
        }
        if(n&1 && ev!=odd+1)
            cout<<-1<<"\n";
        else if(n%2==0 && ev!=odd)
            cout<<-1<<"\n";
        else
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(i%2!=v[i]%2)
                    cnt++;
            }
            cout<<cnt/2<<"\n";
        }
    }
}
