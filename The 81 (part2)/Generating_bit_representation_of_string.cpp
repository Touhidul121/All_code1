#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    vector<ll>F(32,0);
ll n;
     cin>>n;
     string s;
     for(int i=0;i<n;i++)
     {
         cin>>s;
         int mask=0;
         for(char x:s)
         {
             if(x=='a')mask=mask|(1<<0);
             else if(x=='e')mask=mask|(1<<1);
             else if(x=='i')mask=mask|(1<<2);
             else if(x=='o')mask=mask|(1<<3);
             else if(x=='u')mask=mask|(1<<4);
         }
         F[mask]++;
     }
}
