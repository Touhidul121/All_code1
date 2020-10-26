#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1000000;
    int y=1000000;

    vector<pair<int,int>>v;
    v.push_back({x,y}),v.push_back({x+1,y}),v.push_back({x,y-1}),v.push_back({x+1,y-1});
    x++;
    y--;
    for(int i=1;i<=n;i++)
    {
      v.push_back({x+1,y}),v.push_back({x,y-1}),v.push_back({x+1,y-1});
      x++,y--;
    }
    cout<<v.size()<<"\n";
    for(pair<int,int> x:v)
        cout<<x.first<<" "<<x.second<<"\n";

}
