#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int main()
{
    int n,x;
    cin>>n>>x;
    int ar[maxN];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);

    int i=0,j=n-1,ans=0;
    while(i<j)
    {
        while(i<j && ar[i]+ar[j]>x) // we are calculating koto joner jonne gondola lagbe na
            j--;
        if(i>=j)break;
        ans++;
        i++,j--;
    }
    cout<<n-ans<<"\n";
}
