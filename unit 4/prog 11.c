
#include<stdio.h>

int main()
{
    FILE *fp;
    int size;

    fp=fopen("data.txt","r");

    fseek(fp,0,SEEK_END);
    size=ftell(fp);

    printf("File size = %d bytes",size);

    fclose(fp);
}
