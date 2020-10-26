#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double p,sum=0;
    for(int i=0;i<n;i++){
            cin>>p;
        sum+=p;
    }
    cout<<fixed<<setprecision(13)<<sum/n<<endl;
}
