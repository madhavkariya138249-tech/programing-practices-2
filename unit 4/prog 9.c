
#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int up=0,low=0,digit=0,vowel=0,sym=0;

    fp=fopen("data.txt","r");

    while((ch=fgetc(fp))!=EOF)
    {
        if(isupper(ch)) up++;
        else if(islower(ch)) low++;
        else if(isdigit(ch)) digit++;
        else sym++;

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
           vowel++;
    }

    printf("Upper=%d Lower=%d Digits=%d Vowels=%d Symbols=%d",
           up,low,digit,vowel,sym);

    fclose(fp);
}
