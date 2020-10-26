#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,x;
        cin>>n>>x;
        int ev=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a&1)
                odd++;
            else
                ev++;
        }
        if(odd==0)
            cout<<"No"<<"\n";
        else if(ev==0)
        {
            if((x&1)&&(odd>=x))
            {

                    cout<<"Yes"<<"\n";

            }
            else
                cout<<"No"<<"\n";
        }
        else
        {
            if(odd%2==0)
                odd--;
            if(odd+ev>=x)
                cout<<"Yes"<<"\n";
            else
                cout<<"No"<<"\n";
        }
    }
}
