#include<bits/stdc++.h>
using namespace std;

struct p
{
    int a;
    int b;
};



int partition1(int v[],int l,int h)
{
    int pivot=v[l].a;
    int i=l,j=h;

    do
    {
        do{i++;}while(v[i].a<=pivot);
        do{j--;}while(v[j].a>pivot);

        if(i<j)
            swap(v[i],v[j]);
    }while(i<j);

    swap(v[l],v[j]);
    return j;
}

void QuickSort(int v[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition1(v,l,h);
        QuickSort(v,l,j);
        QuickSort(v,j+1,h);
    }
}
int main()
{
    int n,a,b,count=1;
    cin>>n;
    struct p v[n];
    int m=1;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v[i].a=a;
        v[i].b=b;
    }
    QuickSort(v,0,n);


    for(int i=0;i<n-1;i++)
    {
        if(v[i].a==v[i+1].a&&v[i].b==v[i+1].b)
            count++;
        if(m<=count)
        m=count;
        if(v[i].a!=v[i+1].a||v[i].b!=v[i+1].b)
           count=1;
    }
    cout<<m<<endl;

}
