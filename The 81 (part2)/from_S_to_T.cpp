#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--){
string s,t,p;
multiset<char>st;

cin>>s>>t>>p;
for(int i=0;i<s.size();i++)
{
    st.insert(s[i]);
}
string r=s;
s=s+p;

multiset<char>s1,s2;
for(int i=0;i<s.size();i++)
    s1.insert(s[i]);
for(int i=0;i<t.size();i++)
    s2.insert(t[i]);
int flag=0;

for(int i=0;i<t.size();i++)
{
    if(s2.count(t[i])>s1.count(t[i]))
    {
        flag++;
        break;

    }
}
int flag1=0;

//sebsequnce checking
int i=0,j=0;
while(i<r.size()&&j<t.size())
{
    if(r[i]==t[j])
    {
        i++;
    }
    if(r.size()==i)
    {
        flag1++;
        break;
    }
    j++;
}

if(flag||flag1==0)
    cout<<"NO"<<"\n";
else
    cout<<"YES"<<"\n";
    }
}
