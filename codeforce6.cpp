#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,s,count=0;
    cin>>t>>n;
    char st[n];
    while(t--)
    {
    for(i=0;i<n;i++)
    {
        cin>>st[i];
    }
    int gret=(int)st[0];
    //cout<<gret;
    for(i=1;i<n;i++)
    {
        s=(int)st[i];
        //cout<<s;
        gret=max(s,gret);
    }
    //cout<<gret<<" ";
    char ch='a';
    while(ch<=(char)gret)
    {
        cout<<ch;
        ch++;
        count++;
    }
    cout<<count;
    count=0;
    }
    return 0;
}