#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a,b;
    int cost=0;
    cin>>a>>b;

    for(int i=0;i<n-1;i++)
    {

        if(a[i]!=b[i]&&a[i+1]!=b[i+1]){
        if(a[i]==b[i+1]&&a[i+1]==b[i]){

            cost++;
            swap(a[i],a[i+1]);
            i++;
        }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            cost++;
    }
    cout<<cost<<"\n";
}
