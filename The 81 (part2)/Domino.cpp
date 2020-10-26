#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,x,y,count1=0,sum1=0,sum2=0,sum3=0,sum4=0;
    cin>>n;

    vector<int>v,v1;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a&1&&!(b&1)||!(a&1)&&(b&1))
            sum1++;


        sum3+=a;

        sum4+=b;
    }
cout<<sum3<<" "<<sum4<<endl;
if(!(sum3&1)&&!(sum4&1))
    cout<<0<<endl;
else{
    if((sum3&1)&&(sum4&1)&&sum1)
        cout<<1<<endl;
    else
        cout<<-1<<endl;
    }
}

