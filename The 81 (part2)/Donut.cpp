#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        double p;
        p=(c/(b*1.0));
        if(c<=a)

        cout<<-1<<" "<<b<<"\n";
        else if(a==p || p>a)
        {
          cout<<1<<" "<<-1<<"\n";
        }
        else if(c>a && p<a)
        {
            cout<<1<<" "<<b<<"\n";
        }
    }
}
