#include<bits/stdc++.h>
using namespace std;
class Student
{
    int a,b;
    public:
    Student(){}
    Student(int n,int m)
    {
        a=n;b=m;
    }
    Student(Student&d)
    {
        a=d.a+1;
        b=d.b+1;
    }
    void out()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Student st(5,9),st1;
    st1=st;
    st.out();
    st1.out();
    Student st3(st1);
    st3.out();
}