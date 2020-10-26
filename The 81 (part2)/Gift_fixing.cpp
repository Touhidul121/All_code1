#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll c,x=INT_MAX,y=INT_MAX;
        vector<ll>a,b;
        for(int i=0;i<n;i++)
        {
          cin>>c;
          a.push_back(c);
          x=min(c,x);
        }
        for(int i=0;i<n;i++)
        {
            cin>>c;
            b.push_back(c);
            y=min(c,y);
        }
        ll cnt=0;

        //cout<<x<<" "<<y<<"\n";

        for(int i=0;i<n;i++)
        {
            if(a[i]==x && b[i]==y)
                continue;
            else if(a[i]>x && b[i]==y)
            {
                cnt+=a[i]-x;

            }
            else if(a[i]==x && b[i]>y)
            {
                cnt+=b[i]-y;
            }
            else
            {
                ll diff1=a[i]-x;
                ll diff2=b[i]-y;
                if(diff1<diff2)
                {
                  cnt+=diff1;
                  b[i]=b[i]-diff1;
                  cnt+=b[i]-y;
                }
                else
                {
                    cnt+=diff2;
                    a[i]=a[i]-diff2;
                    cnt+=a[i]-x;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
