#include<bits/stdc++.h>
using namespace std;
void patter(int n=5,int diff=1)
{
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k<10)
            {
            cout<<k;
            }
            else
            {
                k=1;
                cout<<k;
            }
            k+=diff;
        }
        cout<<endl;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","W",stdout);
    patter(5);
    patter(4,2);
    return 0;
}