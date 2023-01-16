#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int *ptr;
    int (*ptr1)[9];
    ptr=a;                                      // points the base address of array a :
    ptr1=&a;                                    // points the entire address of array a : 
    printf("%d ",ptr);
    for(int i=0;i<9;i++)
    {
        printf("%d ",(a+i));                    // return address
        printf("%d ",*(a+i));                   // return value
        printf("%u ",(ptr+i));                  //return address of each element of array
        printf("%d ",*(ptr+i));                 //return value of each element of array pointed by ptr
        printf("%u ",*(ptr1+i));
    }
    return 0;
}