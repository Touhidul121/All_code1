#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char s[n+2][m+2]={'0'};
    char x,y;

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            cin>>s[i][j];
        }
    }


    for(int i=1;i<n+1;i++)
    {
        if(i&1){
            x='B';
            y='W';
        }
        else
        {
            x='W';
            y='B';
        }
        for(int j=1;j<m+1;j++)
        {
            if(s[i][j]=='-'){
               cout<<'-';
                continue;
            }
                else
                {
                    if(j&1)
                        cout<<x;
                    else
                        cout<<y;
                }

        }
        cout<<endl;
    }
}
