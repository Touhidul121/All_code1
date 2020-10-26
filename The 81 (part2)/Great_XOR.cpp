#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            if((n^i)>n)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
}
