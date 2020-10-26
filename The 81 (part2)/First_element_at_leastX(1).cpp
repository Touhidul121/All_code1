#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int ar[maxN],st[4*maxN],n,m;

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=ar[ss];
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    st[si]=max(st[2*si],st[2*si+1]);
}

void update(int si,int ss,int se,int qi,int val)
{
    if(ss==se)
    {
        st[si]=val;
        ar[ss]=val;
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
    update(2*si,ss,mid,qi,val);
    else
    update(2*si+1,mid+1,se,qi,val);

    st[si]=max(st[2*si],st[2*si+1]);

}
int query(int si,int ss,int se,int x)
{

    if(st[si]<x)return -1;
    if(ss==se)
        return ss;
    int mid=(ss+se)/2;

    int res;
    res=query(2*si,ss,mid,x);
    if(res==-1)
        res=query(2*si+1,mid+1,se,x);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>ar[i];

    int type,l,r;
    buildtree(1,1,n);

    while(m--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>l>>r;
            update(1,1,n,l+1,r);
        }
        else
        {
            cin>>l;
            if(query(1,1,n,l)<0)
                cout<<-1<<"\n";
            else
            cout<<query(1,1,n,l)-1<<"\n";
        }
    }


}
