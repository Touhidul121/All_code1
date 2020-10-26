#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

vector<int> createlps(string pattern)
{
   vector<int>lps(pattern.size());

   int j=0,i=1;
   while(i<pattern.size())
   {
      if(pattern[j]==pattern[i])
      {
          lps[i]=j+1;
          i++,j++;
      }
      else
      {
          if(j!=0)j=lps[j-1];

          else lps[i]=0,j=0 ,i++;
      }
   }
   return lps;

}

void kmp(string text,string pattern)
{
    vector<int>lps=createlps(pattern);

    int i=0,j=0,cnt=0;
    bool f=false;
    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            i++,j++;
        }
        else
        {
            if(j!=0)j=lps[j-1];

            else i++;
        }
        if(j==pattern.size())
        {
            cout<<"found at index "<<i-pattern.size()<<"\n";
            f=true;
            j=lps[j-1];
        }
    }
    if(!f)
        cout<<"NOT found"<<"\n";
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;
    string text=s1+s1;
    string pattern=s2;
    cout<<text<<" "<<pattern<<"\n";
    kmp(text,pattern);
}
