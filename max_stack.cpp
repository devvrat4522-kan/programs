#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    stack<int>st;
    vector<int>vc;
    int n=0,m=0;
    // Stack(){
    // }

    void Push(int val){
        st.push(val);
        if(n!=0)
            val = max(val,vc[n-1]);
        if(m==n){
            vc.push_back(val);
            m++;
        }
        else   
            vc[n]=val;
        n++;
    }

    void Pop(){
        st.pop();
    }

    int Top(){
        n--;
        return st.top();
    }

    int max_element(){
        return vc[n-1];
    }

};

int main(){
    Stack st1;
    st1.Push(-2);
    st1.Push(0);
    st1.Push(1);
    cout<<"max_element : "<<st1.max_element()<<endl;
    st1.Pop();
    cout<<"Top : "<<st1.Top()<<endl;
    cout<<"max_element : "<<st1.max_element()<<endl;
    st1.Push(5);
    cout<<"max_element : "<<st1.max_element()<<endl;
    return 0;
}