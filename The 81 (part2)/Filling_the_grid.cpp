#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m,x;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m,-1));

    for(int i=0;i<n;i++)
    {
        cin>>x;
        for(int j=0;j<x;j++){
            v[i][j]=1; // left theke fill korte thako
        }
        if(x<m)
            v[i][x]=0; //left theke joto gula fill korlam tar porer cell a keu boshte parbe na , karon tahole row te filled cell er value ak bere jabe
    }

    for(int j=0;j<m;j++)
    {
        cin>>x;
        for(int i=0;i<x;i++) // top theke puron korte thako
        {
            if(v[i][j]==0) // puron korte eshe jodi dekhi ai cell value boshano somvob noy tahole output 0
            {
                cout<<0<<"\n";return 0;
            }
            else v[i][j]=1; // else cell gulare puron koro
       }

            if(x<n) //upor theke joto gula fill korlam tar poroborti cell a keu boshte parbe na karon tahole column wise filled cell er sonkha ak bere jabe
            {
                if(v[x][j]==1) // jodi invalid cell hisebe 0 assign korte eshe dekhi agei oikhane 1 ache tar mane invalid karon aikhane 1 thakle column wise filled cell er sonkha bere jabe tai output 0
                {
                    cout<<0<<"\n";return 0;
                }
                else v[x][j]=0; // else invalid cell a 0 value assign koro
            }
    }
    int res=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==-1)
            {
                res=(res*2)%mod;
            }
        }
    }
    cout<<res<<"\n";

}
