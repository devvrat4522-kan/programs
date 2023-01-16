#include<stdio.h>
#include<ctype.h>
#include<string.h>
int count(char *str);
int main()
{
    char str1[50]="devvrat is a good boy",ch;
    //gets(str);
    //scanf("%c",&ch);
    printf("count = %d",count(str1));
    //dedputs(str);
    return 0;
}
int count(char *str)
{
    int i,count=0,space=0;
    while(*str!='\0')
    {
        while(isspace(*str))
        {
            str++;
        }
        if(*str=='\0')
        {
            return count;
        }
        if( !isspace(*str) && *str !='\0')
        {
            putchar(*str);
            str++;
        }
        count++;
        printf("\n");
    }
    //count=space+1;
    return count;
}