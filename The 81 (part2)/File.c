#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("input4.txt","w");
    fp=fopen("input4.txt","r");
    if(fp==NULL)
   printf("Invalid");
    else{
    char s[1000];
    char ch;
    int i=0;
    while(fscanf(fp,"%c",ch)!=EOF)
    {
        printf("%c",ch);
        s[i++]=ch;
    }
    for(int i=0;i<1000;i++)
        printf("%c",s[i]);
    }
}
