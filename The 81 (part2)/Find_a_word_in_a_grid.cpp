#include<bits/stdc++.h>
using namespace std;
char grid[101][101];
int n,m;
string word="ALLIZZWELL";

bool dfs(int i,int j,int count)
{
    if(count==word.size())
        return true;
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=word[count])
        return false;
    char temp=grid[i][j];

    grid[i][j]=' ';

    bool found=dfs(i+1,j,count+1) || dfs(i-1,j,count+1)|| dfs(i,j+1,count+1)||dfs(i,j-1,count+1)||dfs(i-1,j+1,count+1)||dfs(i+1,j+1,count+1)||dfs(i-1,j-1,count+1)||dfs(i+1,j-1,count+1);
    grid[i][j]=temp;
    return found;
}
int main()
{
int t;
cin>>t;
while(t--){
 cin>>n>>m;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>grid[i][j];
     }
 }
 bool f=false;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(grid[i][j]==word[0] && dfs(i,j,0))
         {
             f=true;
         }
     }
 }
 if(f)
    cout<<"YES"<<"\n";
 else
    cout<<"NO"<<"\n";
}

}
