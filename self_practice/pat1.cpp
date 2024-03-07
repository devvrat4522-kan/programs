#include<bits/stdc++.h>
using namespace std;
class Pat1{
    private:
    int i,j,k;
    public:
    void run() {
        for(i=10;i>=0;i--){
            for(k=0;k<i/2;k++)
                cout<<" ";
            for(j=0;j<=i/2;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
int main(){
    Pat1 p;
    p.run();
}