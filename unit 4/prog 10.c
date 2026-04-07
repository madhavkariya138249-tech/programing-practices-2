
#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp=fopen("data.txt","r");

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='a')
            ch='x';
        printf("%c",ch);
    }

    fclose(fp);
}
