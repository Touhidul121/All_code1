#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,count=0;
    cin>>n>>m;

    while(n>0&&m>0)
    {
        count++;
        n--;
        m--;
    }
    if(count&1)
        cout<<"Akshat"<<endl;
    else

        cout<<"Malvika"<<endl;
}
