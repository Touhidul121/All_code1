#include<bits/stdc++.h>
using namespace std;

struct trie
{
    struct trie* child[26];
    int count;
    bool isend;

    trie()
    {
        count=0;
        isend=false;
        memset(child,0,sizeof(child));
    }
};

struct trie *root;

void insert(string str)
{
    struct trie *cur=root;

    for(char ch:str)
    {
        int idx=ch-'a';
        if(cur->child[idx]==NULL)
        {
            cur->child[idx]=new trie;
        }
        cur->child[idx]->count++;
        cur=cur->child[idx];
    }
    cur->isend=true;
}

bool search(string str)
{
    struct trie *cur=root;
    for(char ch:str)
    {
        int idx=ch-'a';
        if(cur->child[idx]==NULL)
            return false;
        cur=cur->child[idx];
    }
    return cur->isend;
}
bool find_prefix(string str)
{
    struct trie *cur=root;
    for(char ch:str)
    {
        int idx=ch-'a';
        if(cur->child[idx]==NULL)
            return false;
        cur=cur->child[idx];
    }
    return cur->count>0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    root=new trie;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        insert(str);
    }
    int q,type;
    cin>>q;

    while(q--)
    {
      cin>>type;
      if(type==1)
      {
          string str;
          cin>>str;
          if(search(str))
          cout<<"YES"<<"\n";
          else
            cout<<"NO"<<"\n";
      }
      else
      {
          string str;
          cin>>str;
          if(find_prefix(str))
            cout<<"YES"<<"\n";
          else
            cout<<"NO"<<"\n";
      }
    }

}
