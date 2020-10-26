#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<char>dk;
    //push S L P R H
    dk.push_back('S');

     dk.push_back('L');
      dk.push_back('P');
       dk.push_back('R');
        dk.push_back('H');
n--;
while(n>=5)
{
    n-=5;
    n/=2;
}

    if(dk[n]=='S')
        cout<<"Sheldon"<<"\n";
    else if(dk[n]=='L')
        cout<<"Leonard"<<"\n";
    else if(dk[n]=='P')
        cout<<"Penny"<<'\n';
    else if(dk[n]=='R')
        cout<<"Rajesh"<<"\n";
    else
        cout<<"Howard"<<"\n";
}
