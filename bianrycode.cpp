#include<bits/stdc++.h>
//#include<string.h>
using namespace std;
int main()
{
    char st[20],st1[20];
    int i=0;
    cin>>st;
    cin>>st1;
    while(true)
    {
        if(st[i]=='\0'||st1[i]=='\0')
        {
            break;
        }
        else if(st[i]<st1[i])
        {
            cout<<st[i];
        }
        else
        {
            cout<<st1[i];
        }
        i++;
    }
    return 0;
}