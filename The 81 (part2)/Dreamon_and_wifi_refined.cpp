#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nCr(ll n,ll k)
{
    if(k>n-k)
        k=n-k;
    ll res=1;

    for(ll i=1;i<=k;i++)
    {
        res=res*(n-i+1);
        res=res/i;
    }
    return res;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s1,s2;
  cin>>s1>>s2;
  ll cnt1=0,cnt2=0,cnt3=0;

  for(int i=0;i<s1.size();i++)
  {
      if(s1[i]=='+')cnt1++;
      if(s2[i]=='+')cnt2++;
      if(s2[i]=='?')cnt3++;
  }
  long double ans=0;
  ll diff=cnt1-cnt2;
  if(diff>cnt3 || diff<0)ans=0;
  else
  {
      long double total=pow(2,cnt3);
      ans=nCr(cnt3,diff)/(total*1.0);
  }

  cout<<fixed<<setprecision(12)<<ans<<"\n";
}
