#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0,count1=0;
        for(int i=0;i<s.size();i++)
        {
         if((s[i]-'0')%2!=0 )
            count++;
        }
        if(count<=1)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if((s[i]-'0')%2!=0)
                {
                    cout<<s[i];
                    count1++;
                }
                if(count1>=2)
                    break;
            }
        }
        cout<<endl;
    }
}
