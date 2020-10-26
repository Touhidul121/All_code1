#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;

    int flag=0;
    int ind=0;
    int i=0;
    for( i=n.size()-1;i>=0;i--)
    {
        if((n[i]-'0')%2==0)
        {
            ind=i;
            flag++;
        }
    }
    if(flag)
    {
        swap(n[n.size()-1],n[ind]);
        cout<<n<<"\n";
    }
    else
        cout<<-1<<"\n";
}
