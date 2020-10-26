//--------this codes finds a pair whose sum=10-------
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cout<<"Enter size of array"<<endl;
 cin>>n;
 int a[n];
 cout<<"Enter elements of array"<<endl;
 for(int i=0;i<n;i++)
        cin>>a[i];
        //------sort the array------
        sort(a,a+n);
 int i=0,j=n-1;

 while(i<j)
 {
     if(a[i]+a[j]==10)
     {
         cout<<a[i]<<" "<<a[j]<<endl;
         i++;
         j--;
     }
     else if(a[i]+a[j]<10)
        i++;
     else if(a[i]+a[j]>10)
        j--;
 }
}
