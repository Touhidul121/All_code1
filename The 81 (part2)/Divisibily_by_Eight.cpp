#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;

        int n=s.size();
        int v[n+1];

        for(int i=1; i<=n; i++)
            v[i]=s[i-1]-'0';

        for(int i=1; i<=n-2; i++)
        {
            for(int j=i+1; j<=n-1; j++)
            {
                for(int k=j+1; k<=n; k++)
                {
                    int x=v[i]*100+v[j]*10+v[k];
                    if(x%8==0&&v[i]!=0)
                    {
                        cout<<"YES"<<"\n";
                        cout<<x<<"\n";
                        return 0;
                    }


                }
            }
        }
        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int x=v[i]*10+v[j];
                if(x%8==0&&v[i]!=0)
                {
                    cout<<"YES"<<"\n";

                    cout<<x<<"\n";
                    return 0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i]%8==0)
            {
                cout<<"YES"<<"\n";
                cout<<v[i]<<"\n";
                return 0;
            }
        }

        cout<<"NO"<<"\n";
    return 0;
}
