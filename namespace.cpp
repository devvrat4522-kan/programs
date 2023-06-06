#include<bits/stdc++.h>
using namespace std;
void mult(int (*arr1)[5],int (*arr2)[5],int r,int c)
{
    int c1[r][c],i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            c1[i][j]=0;
            for(k=0;k<c;k++)
            {
                c1[i][j]+=(*(*(arr1+i)+k))*(*(*(arr2+k)+j));
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<*(*(c1+i)+j)<<" ";
        }cout<<endl;
    }
}
int main()
{
    int row,column;
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    cin>>row>>column;
    int arr1[5][5],arr2[5][5];
    
    int (*ptr)[column]=new int[5][5],i,j;
    int (*ptr1)[column]=new int[5][5];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    ptr=arr1;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    ptr1=arr2;
    cout<<endl;
    
    
    return 0;
}
