#include<bits/stdc++.h>
using namespace std;

void validpar(int openp,int closep,string s)
{
    if(openp==0 && closep==0)
    {
        cout<<s<<"\n";
        return;
    }
    if(openp>closep) return; // means closing parenthesis besi ...karon openp >closep tokhoni hobe jokhon amra beshi closep use korbo..karon prottekbar use korar somoy biyog kortechi..

    if(openp>0)validpar(openp-1,closep,s+'(');
    if(closep>0)validpar(openp,closep-1,s+')');
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    validpar(n,n,"");
}
