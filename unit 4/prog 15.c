
#include<stdio.h>

int main()
{
    FILE *fp;
    int pos;

    fp=fopen("data.txt","r");

    fseek(fp,5,SEEK_SET);
    pos=ftell(fp);
    printf("Position after fseek: %d\n",pos);

    rewind(fp);
    pos=ftell(fp);
    printf("Position after rewind: %d\n",pos);

    fclose(fp);
}
