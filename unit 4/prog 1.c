
#include<stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp=fopen("data.txt","w");
    printf("Enter text: ");
    gets(str);
    fputs(str,fp);
    fclose(fp);

    fp=fopen("data.txt","r");
    fgets(str,100,fp);
    printf("File content: %s",str);
    fclose(fp);

    return 0;
}
