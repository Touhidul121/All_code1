#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,c;
    cin>>x>>y>>c;

    int flag=0;

    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(i*x+j*y==c)
            {
                flag++;
                break;
            }
        }
    }
    if(flag>0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
