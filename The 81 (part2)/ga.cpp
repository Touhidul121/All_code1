#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(2*n);

    if(n%2==0)
        cout<<"NO"<<"\n";
    else
    {

        int x=1,y=2*n,i=0,j=n,k=0;
        while(x<y)
        {
            if(k%2==0)
            {
                v[i++]=x;
                v[j++]=x+1;
                x+=2;
            }
            else
            {
                v[i++]=y;
                v[j++]=y-1;
                y-=2;
            }
            k++;
        }
        cout<<"YES"<<"\n";
    for(auto x:v)
        cout<<x<<" ";

        cout<<"\n";
    }
}
