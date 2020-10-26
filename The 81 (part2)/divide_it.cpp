#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void fun()
{
    ll n,flag=0,flag2=0;
    cin>>n;
    ll count=0;
    if(n==1)
        cout<<0<<endl;
    else{
    while(n>1)
    {
     if(n%2==0)
     {
         n=n/2;
         count++;
     }
     else if(n%3==0)
     {
         n=2*(n/3);
         count++;
     }
     else if(n%5==0)
     {
         n=3*(n/5);
         count++;
     }
     else
     {
         flag2++;
         break;
     }
     if(n==1)
     {
         flag++;
         break;
     }
    }

    if(flag)
    {
        cout<<count<<endl;
    }
    else if(flag2||!flag)
        cout<<-1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }

}
