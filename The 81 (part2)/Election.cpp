#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int m=0,sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(m<a[i])
        {
            m=a[i];
        }
        sum+=a[i];
    }
    cout<<max(m,((2*sum)/n)+1)<<endl;
}
