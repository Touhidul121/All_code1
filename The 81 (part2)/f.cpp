#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    long long cur,res=0;
    string s;
    cin>>s;

        for(int j=0;j<s.size();j++)
        {

            if(s[i]=='+')
                cur++;
            else
                cur--;
            if(cur<0)
            {
                res+=(i+1);
            }

        }

    cout<<res<<"\n";
    }
}
