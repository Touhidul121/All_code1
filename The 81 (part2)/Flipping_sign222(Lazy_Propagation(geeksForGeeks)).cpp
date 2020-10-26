#include<bits/stdc++.h>
using namespace std;
#define maxN 10001
int arr[maxN];
int st[3*maxN];
int lazy[3*maxN];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    st[si]=st[2*si]+st[2*si+1];
}

void update(int si,int ss,int se,int qs,int qe)
{
    if(lazy[si]!=0)
    {
        st[si]*=-1;
        if(ss!=se)
        {
            lazy[2*si]=!lazy[2*si];
            lazy[2*si+1]=!lazy[2*si+1];
        }
        lazy[si]=0;
        return;
    }
    if(ss>se || ss>qe || se<qs)return;
    if(ss>=qs && se<=qe)
    {
        st[si]*=-1;
        if(ss!=se)
        {
            lazy[2*si]=!lazy[2*si];
            lazy[2*si+1]=!lazy[2*si+1];
        }
        return;
    }
    int mid=(ss+se)/2;
    update(2*si,ss,mid,qs,qe);
    update(2*si+1,mid+1,se,qs,qe);
    st[si]=st[2*si]+st[2*si+1];
}

int query(int si,int ss,int se,int qs,int qe)
{
     if(ss>se || ss>qe || se<qs)return 0;
     if(lazy[si]!=0)
    {
        st[si]*=-1;
        if(ss!=se)
        {
            lazy[2*si]=!lazy[2*si];
            lazy[2*si+1]=!lazy[2*si+1];
        }
        lazy[si]=0;
    }
    if(ss>=qs && se<=qe)
    {
        return st[si];
    }
    int mid=(ss+se)/2;
     return query(2*si,ss,mid,qs,qe)+
    query(2*si+1,mid+1,se,qs,qe);
}
int main()
{
    int n,q,type,l,r;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    buildtree(1,1,n);

    while(q--)
    {
        cin>>type>>l>>r;
        if(type==1)
            update(1,1,n,l,r);
        else
            cout<<query(1,1,n,l,r)<<"\n";
    }
}
