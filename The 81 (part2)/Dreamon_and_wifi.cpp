#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count0=0,count1=0,cnt0=0,cnt1=0,x=0,n=s1.size();
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='-'){
            count0++;
        }
        if(s1[i]=='+')
            count1++;
        if(s2[i]=='-'){
            cnt0++;
        }
        if(s2[i]=='+')
            cnt1++;
            if(s2[i]=='?')
                x++;


    }

    if(count0==cnt0&&count1==cnt1&&x==0)
        cout<<fixed<<setprecision(12)<<(float)1<<"\n";
    else if((count0==0&&cnt0>0)||(count1==0&&cnt1>0))
    cout<<fixed<<setprecision(12)<<(float)0<<"\n";
    else
    {


      cout<<fixed<<setprecision(12)<<(1.0/pow(2,x))<<"\n";

    }

}
