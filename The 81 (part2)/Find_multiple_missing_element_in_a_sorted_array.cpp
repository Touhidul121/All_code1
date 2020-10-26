#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p[11]={6,7,9,10,11,14,15,19,28};

int diff=p[0]-0;
for(int i=0;i<11;i++)
{
    if((p[i]-i)!=diff)
    {
        while(diff<p[i]-i)
        {
            cout<<"missing element is "<<diff+i<<endl;
            diff++;
        }
    }
}
}
