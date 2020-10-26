 #include<bits/stdc++.h>
 using namespace std;

 typedef long long ll;
 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    unordered_set<ll>st;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        st.insert(vec[i]);
    }
    ll last=0;
    for(int i=0;i<n;i++)
    {
        if(st.find(vec[i]*2)!=st.end())
            continue;
        if(vec[i]%3==0 || st.find(vec[i]*2)!=st.end() )
            continue;
        last=vec[i];
        break;
    }
    stack<ll> stk;
    stk.push(last);
    while(stk.size()!=n)
    {
        ll val=stk.top();
        if(st.find(val*3)!=st.end())
            stk.push(val*3);
        else
            stk.push(val/2);
    }
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
 }
