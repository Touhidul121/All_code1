#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    int a;

    for(int i=0;i<5;i++)
    {
        cin>>a;
        s.insert(a);
    }

    s.erase(s.find(2));

    for(auto x:s)
        cout<<x<<" ";
}
