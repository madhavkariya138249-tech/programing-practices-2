
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp1,*fp2;
    char str[100];
    int i;

    fp1=fopen("greencity.txt","w");
    printf("Enter string: ");
    gets(str);
    fputs(str,fp1);
    fclose(fp1);

    fp2=fopen("cleancity.txt","w");

    for(i=strlen(str)-1;i>=0;i--)
        fputc(str[i],fp2);

    fclose(fp2);
}
