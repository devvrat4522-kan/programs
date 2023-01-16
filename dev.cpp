#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[10],gret,j,least;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        //gret=a[0];
        least=a[i];
        for(j=i+1;j<5;j++)
        {
            //gret=max(a[j],gret);
            least=min(a[j],least);
        }
        int temp=a[i];
        a[i]=least;
        least=temp;
    }
        for(i=0;i<5;i++)
        {
            cout<<a[i]<<" ";
        }
        return 0;
}