#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<n;i++)
        st.insert(s[i]);
    if(st.size()==1)
        cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<'\n';
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cout<<s[i]<<s[i+1]<<"\n";
                return 0;
            }
        }
    }
}
