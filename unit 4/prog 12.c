
#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    int num,rev=0,r;

    fp1=fopen("num.txt","w");
    printf("Enter number: ");
    scanf("%d",&num);
    fprintf(fp1,"%d",num);
    fclose(fp1);

    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }

    fp2=fopen("rev.txt","w");
    fprintf(fp2,"%d",rev);
    fclose(fp2);
}
