#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    vector<int>v(n),v1,v3(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            count=0;

            for(int m=0;m<n;m++)
            {
                v3[m]=v[m];
            }
            for(int k=i;k<=j;k++)
            {

               v3[k]=1-v3[k];
            }

            for(int l=0;l<n;l++)
            {
                if(v3[l]==1)
                    count++;
            }
            v1.push_back(count);
        }
    }
    cout<<*max_element(v1.begin(),v1.end())<<endl;

}
