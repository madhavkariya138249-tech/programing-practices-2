
#include<stdio.h>

struct emp
{
    int code;
    char name[20];
    float salary;
};

int main()
{
    FILE *fp;
    struct emp e, max;

    fp=fopen("emp.txt","w");

    for(int i=0;i<3;i++)
    {
        printf("Enter code name salary: ");
        scanf("%d%s%f",&e.code,e.name,&e.salary);
        fprintf(fp,"%d %s %f\n",e.code,e.name,e.salary);
    }

    fclose(fp);

    fp=fopen("emp.txt","r");
    max.salary=0;

    while(fscanf(fp,"%d%s%f",&e.code,e.name,&e.salary)!=EOF)
    {
        if(e.salary>max.salary)
            max=e;
    }

    printf("Highest Salary Employee: %s %f",max.name,max.salary);

    fclose(fp);
}
