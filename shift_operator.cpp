#include<bits/stdc++.h>
using namespace std;
void binary(int num)
{
    //cout<<(9>>2)<<endl;
    for(int i=8;i>=0;i--)
        cout<<((num>>i)&1);
}
int main()
{
    freopen("output.txt","w",stdout);
    binary(9);
    cout<<"\n"<<(1<<3)<<endl;  // 2^n
    int a=9;
    int b=3;
    cout<<((b>>1)|1)<<endl;
    binary(a&(~(a<<1)));cout<<endl;
    if((a|(1<<b))!=0)
        cout<<"Set bit\n";
    else
        cout<<"Not Set\n";
        return 0;
    
}