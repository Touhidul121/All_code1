#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int c,d,count1=0;
        cin>>c>>d;
        for(int i=1;i<=min(c,d);i++)
        {
            if(c%i==0&&d%i==0)
                count1++;

        }

       if(count1>1)
           cout<<"Infinite"<<endl;
       else
            cout<<"Finite"<<endl;
    }
}
