#include<stdio.h>
int add(int a);
int main()
{
    int n,a[10],i,sum1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum1=sum1+add(a[i]);
    }
    printf("SUM =%d ",sum1);
    return 0;
}
int add(int x)
{
    int sum=0;
    sum=sum+x;
    return sum;
}