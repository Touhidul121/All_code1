#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,countc=0,countbi=0,countba=0;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        if(i%3==0)
            countc+=v[i];
        else if(i%3==1)
            countbi+=v[i];
        else
            countba+=v[i];
    }
    int x=max(countc,max(countbi,countba));

    if(countc==x)
        cout<<"chest"<<endl;
    else if(countbi==x)
        cout<<"biceps"<<endl;
    else
        cout<<"back"<<endl;
}
