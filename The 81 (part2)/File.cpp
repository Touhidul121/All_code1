#include<stdio.h>

int main()
{
    File *fp;
    fp=fopen("input.txt","w");
    char s[1000];
    gets(s);
    fprintf(fp,"%s",s);
}
