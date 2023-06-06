#include <iostream>
using namespace std;
int main() {
    string st;int i;
    cin>>st;
    // st[0]='E';
    for(int i=st.length();i>=0;i--)
        st[i+1]=st[i];
    st[i]='T';
    cout<<st;
}