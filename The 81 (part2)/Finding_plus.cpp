#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,count=0,count1=0,x;
    cin>>h>>w;
    char a[h][w];

    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++){
        cin>>a[i][j];
        if(a[i][j]=='*')
            count1++;
        }

    for(int i=1;i<h-1;i++)
    {

        for(int j=1;j<w-1;j++)
        {
            count=1;
            if(a[i][j]=='*')
            {
                int x1=j,x2=j,y1=i,y2=i;
                bool left1=false,left2=false,right1=false,right2=false;

                while(x1>0)
                {
                    if(a[i][x1]=='*'&&a[i][x1-1]=='*')
                    {
                        count++;
                        left1=true;
                    }
                    x1--;
                }
                while(x2<w-1)
                {
                    if(a[i][x2]=='*'&&a[i][x2+1]=='*')
                    {
                        count++;
                        left2=true;
                    }
                    x2++;
                }
                while(y1>0)
                {
                    if(a[y1][j]=='*'&&a[y1-1][j]=='*')
                    {
                        count++;
                        right1=true;
                    }
                    y1--;
                }

                while(y2<h-1)
                {
                    if(a[y2][j]=='*'&&a[y2+1][j]=='*')
                    {
                        count++;
                        right2=true;
                    }
                    y2++;
                }
                if(left1&&right1&&left2&&right2)
                {
                    x=count;
                    break;
                }

            }
        }
    }
//cout<<x<<endl;
    if(x==count1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
