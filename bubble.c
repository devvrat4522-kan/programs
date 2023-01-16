#include<stdio.h>
int sum(int );
int display(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    i=sum(n);
    display(n);
    printf("sum=%d",i);
    return 0;
}
int sum(int x)
{
    if((x/10)==0)
    {
        return x;
    }
    else
    {
        return ((x%10)+sum(x/10));
    }
}
int display(int x)
{
    
}