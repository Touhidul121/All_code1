#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p[11]={6,7,8,9,10,11,13,14,15};
    int diff=p[0]-0;

    for(int i=0;i<11;i++)
    {
        if((p[i]-i)!=diff)
        {
            cout<<"Missing element is "<<i+diff<<endl;
            break;
        }
    }
}
