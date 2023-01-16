#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;                                 // sub string program
    cin>>st;
    int beg=0,end=1;
    for(int i=0;i<st.length();i++)
    {
        beg=0;
        end=1+i;
        while(end<=st.length())
        {
            for(int j=beg;j<end;j++)
            {
                cout<<st[j];
            }
            beg++;
            end++;
            cout<<" ";
        }
        //cout<<" ";
    }
    //cout<<st;
    return 0;
}