#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int charc=0,space=0,tab=0,line=0;

    fp=fopen("data.txt","r");

    while((ch=fgetc(fp))!=EOF)
    {
        charc++;
        if(ch==' ') space++;
        if(ch=='\t') tab++;
        if(ch=='\n') line++;
    }

    printf("Characters=%d\nSpaces=%d\nTabs=%d\nLines=%d",charc,space,tab,line);

    fclose(fp);
}
