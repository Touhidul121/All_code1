#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,k,sum=0;
    cin>>w>>h>>k;
int limit=h/2;
    for(int i=1;i<=k;i++)
    {
        sum+=2*(h+w-2);
    }
    cout<<sum<<endl;
}
