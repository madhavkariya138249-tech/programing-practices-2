
#include<stdio.h>

int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    char ch;

    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w");

    while((ch=fgetc(fp1))!=EOF)
        fputc(ch,fp2);

    fclose(fp1);
    fclose(fp2);

    printf("File copied");
}
