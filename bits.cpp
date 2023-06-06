// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// // int main()
// // {
// //     ll n,m,i,j,sum=0,x,y;
// //     cin>>n>>m;
// //     ll arr[n];
// //     for(i=0;i<n;i++)    
// //         cin>>arr[i];
// //     sort(arr,arr+n,greater<int>());
// //     while(m--){
// //         ll sum=0;
// //         cin>>x>>y;
// //     if(x==y==1)
// //         cout<<arr[0]<<"\n";
// //     else{
// //         for(i=x-y;i<x;i++)
// //             sum+=arr[i];
// //         cout<<sum<<"\n";
// //     }
// //     }
// //     return 0;
// // }
// // class G_Parents
// // {
// //     public:
// //     G_Parents(){
// //         cout<<"Gparents constructor\n";
// //     }
// //     ~G_Parents(){
// //         cout<<"Gparents Distructor\n";
// //     }
// // };
// // class Parents{
// //     public:
// //     Parents(){
// //         cout<<"parents constructor\n";
// //     }
// //     ~Parents(){
// //         cout<<"parents Distructor\n";
// //     }
// // };
// // class child:public G_Parents,public Parents
// // {
// //     public:
// //     child():G_Parents(),Parents(){
// //         cout<<"child constructor\n";
// //     }
// //     ~child(){
// //         cout<<"child Distructor\n";
// //     }
// // };
// // int main()
// // {
// //     child cg;
// //     return 0;
// // }

// // class Base1{
// //  public:
// // Base1(int x):value(x) { }
// // int getData() {
// //  return value;
// // }
// // protected:
// // int value;
// // };
// // class Base2{
// //     protected:
// //     char letter;
// //  public: 
// //  Base2(char c):letter(c){}
// //  char getData() {
// // return letter;
// //  }
// // };
// // class Derived:public Base1,public Base2{
// // public: 
// // Derived(int i,char c, double f): Base1(i),Base2(c),real(f) { }
// // double getData() {
// //  return real;
// // }
// //  private:
// // double real;
// // };
// // main(){
// // Base1 *b1Ptr,b1(10);
// // Base2 *b2Ptr;Base2 b2('L');
// // Derived *dPtr;Derived d(7,'d',3.5);
// // b1Ptr=&d;
// // cout<<b1Ptr->getData();cout<<endl;
// // b2Ptr=&d;
// // cout<<b2Ptr->getData();cout<<endl;
// // cout<<d.getData();
// // cout<<b1.getData();
// // }

// // class Point{
// // protected:
// // int xCo;
// // int yCo;
// // public:
// // Point():xCo(0),yCo(0) {}
// // Point(int a,int b): xCo(a),yCo(b) {}
// // friend ostream& operator << (ostream&,Point&);
// // };
// // class Circle:public Point{
// //  protected: 
// // double radius;
// //  public: 
// // Circle(double r, int a, int b): Point(a,b),radius(r) {}
// // void area();
// // friend ostream& operator << (ostream&,Circle&);
// // };
// // int main(){
// // Point *pPtr=NULL, p(30,50);
// // Circle *cPtr=NULL, c(2.7,10,5);
// // cout<<p;
// // cout<<c;
// // /* these are ok */
// // pPtr=&c;
// // cout<<*pPtr;
// // /* Treats circle as a point, it can see the base part only */
// //  cPtr=(Circle *)pPtr;
// //  cout<<*cPtr;
// // //  cout<<cPtr->area();
// //  /* casts base class pointer to derived class pointer ok*/ 
// // //  pPtr=&p;
// // //  cPtr=(Circle *)pPtr; 
// // //  cout<<*cPtr;
// // //  cout<<cPtr->area();
// //  /* Dangerous: Treating Point as a circle */
// // }


// // class Base{
// // public:
// // void show(void){cout<<"Base";}
// // };
// // class Derv1:public Base{
// // public:
// // void show(void){cout<<"Derv1";}
// // };
// // class Derv2:public Base{
// // public:
// // void show(void){cout<<"Derv2";}
// // };
// // int main(){
// // Base b;
// // Base *ptr;
// // Derv1 dv1;
// // Derv2 dv2;
// // ptr=&b;
// // ptr->show(); //Base1
// // ptr=&dv1;
// // ptr->show(); //Base1
// // ptr=&dv2;
// // ptr->show(); //Base1
// // }

// // void test()
// // {
// //     ll n,zero=0;char d;
// //     cin>>n>>d;
// //     string st;
// //     cin>>st;
// //     for(int i=0;st[i]!='\0';i++){
// //         if(st[i]=='0')
// //         {
// //             zero++;
// //             break;
// //         }
// //     }
// //     string st1="";
// //     int i;
// //     if(d>='2'||(d=='1' && zero>=1)){
// //     for(i=0;st[i]!='\0';i++)
// //     {
// //         if(st[i]>=d)
// //             st1.push_back((st[i]));
// //         else
// //             break;
// //     }
// //     st1.push_back(d);
// //     for(;st[i]!='\0';i++)
// //         st1.push_back(st[i]);
// //     }
// //     else{
// //         st1=st;
// //         st1.push_back(d);
// //     }
// //     cout<<st1;
// // }
    
// // int main()
// // {
// //     ll t;
// //     cin>>t;
// //     while (t--)
// //     {
// //         test();
// //         cout<<"\n";
// //     }
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// struct Nodes
// {
//     int data;
//     struct Nodes *next;
// };
// struct Nodes *start=NULL;
// Nodes *getnode()
// {
//     Nodes *newnode =new Nodes;
//     cout<<"Enter the element \n";
//     cin>>newnode->data;
//     newnode->next=NULL;
//     return newnode;
// }
// void insert_sort()
// {
//     Nodes *newnode=getnode();
//     if(start==NULL||start->data > newnode->data)
//     {
//         newnode->next=start;
//         start=newnode;
//     }
//     else
//     {
//         Nodes *temp=start;
//         while(temp->next!=NULL && temp->next->data > newnode->data)
//         {
//             newnode->next=temp->next;
//             temp->next=newnode;
//         }
//     }
// }
// void display()
// {
//     if(start==NULL)
//         cout<<"EMpty\n";
//     else{
//         Nodes *temp=start;
//         while(temp->next!=NULL)
//         {
//             cout<<temp->data<<' ';
//             temp=temp->next;
//         }
//         cout<<temp->data<<"\n";
//     }
// }
// int main()
// {
//     int n,f=0;
//     int choice;
//     do{
//         cout<<"1) insert \n 2.)dispaly \n 3.)Exit \n";
//         cin>>choice;
//         switch(choice)
//         {
//             case 1:
//             insert_sort();
//             break;
//             case 2:
//             display();
//             break;
//             case 3:
//             f=1;
//             break;
//         }
//     }while(choice!=3);
//     return 0;
// }

// // stack<int> s1,s2;
// // int front=-1;
// // void inser()
// // {
// //     int n;
// //     cout<<"enter the element : ";
// //     cin>>n;
// //     s1.push(n);
// //     front++;
// // }
// // void dele()
// // {
// //     while(!s1.empty())
// //     {
// //         s2.push(s1.top());
// //         s1.pop();
// //     }
// //     cout<<"\nDeleted : "<<s2.top()<<endl;
// //     s2.pop();
// //     front--;
// //     while (!s2.empty())
// //     {
// //         s1.push(s2.top());
// //         s2.pop();
// //     }
// // }
// // void display()
// // {
// //     while(!s1.empty())
// //     {
// //         s2.push(s1.top());
// //         s1.pop();
// //     }
// //     while(!s2.empty())
// //     {
// //         cout<<s2.top()<<" ";
// //         s2.pop();
// //     }
// // }
// // int main()
// // {
// //     int ch;
// //     do{
// //         cout<<"Enter the choice : \n1.)inset\n2.)Delete\n.3.)display4.)exit\n";
// //         cin>>ch;
// //         switch(ch)
// //         {
// //             case 1:
// //             inser();
// //             break;
// //             case 2:
// //             dele();
// //             break;
// //             case 3:
// //             display();
// //             break;
// //         }
// //     }while(ch!=4);
// //     return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;
// struct nodes{
//     int data;
//     struct nodes *next;
// };
// struct nodes *start=NULL;
// nodes *getnode(){
//     nodes *newnode=new nodes;
//     int n;
//     cout<<"enter the data : ";
//     cin>>n;
//     newnode->data=n;
//     newnode->next=NULL;
//     return newnode;
// }
// void insert(){
//     nodes *newnode,*temp;
//     newnode=getnode();
//     if(start==NULL)
//         start=newnode;
//     else{
//         temp=start;
//         while(temp->next!=NULL)
//             temp=temp->next;
//         temp->next=newnode;
//         newnode->next=start;
//     }
// }
// void display(){
//     nodes *temp;
//     if(start==NULL)
//         cout<<"empty\n";
//     else
//     {
//         temp=start;
//         while(temp->next!=start)
//         {
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
// }
// int main()
// {
//     int ch;
//     do
//     {
//         cout<<"1.)insert\n2.)Display\n3.)exit\n";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1:
//             insert();
//             break;
//             case 2:
//             display();
//             break;
//             case 3:
//             break;
//         }
//     } while (ch!=3);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// class base
// {
//     protected:
//     int a,b;
//     public:
//     void set(int i,int j)
//     {
//         a=i;b=j;
//     }
//     void show()
//     {
//         cout<<"a : "<<a<<"\nb : "<<b;
//     }
// };
// // class derive:public base
// // {
// //     public:
// //     void sum(){
// //     cout<<"\na+b : "<<a+b;
// //     }
// // };
// class derive1:private base
// {
//     public:
//     base::a;
//     base::b;
//     void mul(){
//         base::set(4,5);
//         base::show();
//         cout<<"\na*b : "<<a*b;
//     }
// };
// int main()
// {
//     derive1 d;
//     // d.set(5,6);
//     // d.show();
//     // d.sum();
//     d.mul();
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class base
// {
//     public:
//     virtual void funct(){
//         cout<<"Base 1\n";
//     }
// };
// class derive : public base
// {
//     public:
//     void funct()
//     {
//         cout<<"Derive \n";
//     }
// };
// int main()
// {
//     base *ptr,b;
//     ptr=&b;
//     ptr->funct();
//     derive d;
//     ptr=&d;
//     ptr->funct();
//     // derive d;
//     // d.funct();
//     return 0;
// }

// 

// #include<bits/stdc++.h>
// using namespace std;
// void test()
// {
//     int n;
//     cin>>n;
//     string st;
//     cin>>st;
//     int f=0,count=0;
//     if(n==1)
//         cout<<0;
//     else{
//     for(int i=0;i<n-1;i++)
//     {
//         if(st[i]=='1')
//             f=1;
//         if(st[i]!=st[i+1])
//             count++;
//     }
//     cout<<count-1;
//     }
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         test();
//         cout<<"\n";
//     }
//     return 0;
// }


// ###################################################  + OPERATOR OVERLOADING #############################
// #include<bits/stdc++.h>
// using namespace std; 
// class op
// {
//     int a,b;
//     public:
//     op(){}
//     op(int i,int j){
//         a=i;b=j;
//     }
//     ~op(){
//     }
//     op operator+(op);
//     void show(){
//         cout<<"a : "<<a<<"\nb : "<<b<<"\n";
//     }
// };
// op op::operator+(op o){
//     op o3;
//     o3.a=a+o.a;
//     o3.b=b+o.b;
//     return o3;
// }
// int main(){
//     op o1(5,6);op o2(5,7);
//     o1.show();o2.show();
//     o1=o1+o2;
//     o1.show();
//     return 0;
// }

// ##################################### -- && ++ OVERLOADING #################################

// #include<bits/stdc++.h>
// using namespace std;
// class Over1
// {
//     int a;
//     public:
//     Over1(){}
//     Over1(int i){a=i;}
//     Over1 operator++();
//     Over1 operator++(int);
//     void show(){
//         cout<<"\na : "<<a<<endl;
//     }
// };
// Over1 Over1::operator++(){
//     Over1 as;
//     as.a=a++;
//     return as;
// }
// Over1 Over1::operator++(int){
//     Over1 as1;
//     as1.a=++a;
//     return as1;
// }
// int main(){
//     Over1 gh(9),gh1(5);
//     gh.show();
//     gh++;
//     gh.show();
//     ++gh1;
//     gh1.show();
//     return 0;
// }

//  ############################################### >> and << operator ###############################################

// #include<bits/stdc++.h>
// using namespace std;
// class opps
// {
//     int a;
//     public:
//     friend void operator>>(istream &h,opps &o1);
//     friend void operator<<(ostream &out,opps &o2);  
// };
// void operator>>(istream &h,opps &o1)
// {
//     h>>o1.a;
// }
// void operator<<(ostream &out,opps &o1)
// {
//     out<<o1.a;
// }
// int main() {
//     opps ob;
//     cin>>ob;
//     cout<<ob;
// }

// ######################################## Template ###################################################pragma endregion

// #include<bits/stdc++.h>
// using namespace std;
// template<class T,class T1,class T2>
// void AP(T a,T1 d,T2 n)
// {
//     T ans=0;int j=1;
//     cout<<(a)<<" ";
//     ans=ans+a;
//     for(int i=1;i<n;i++)
//     {
//         ans=a+(j*d);
//         j++;
//         cout<<ans<<" ";        
//     }
// }
// int main(){
//     int a,b,c;
//     a=1;
//     b=2;
//     c=5;
//     AP(a,b,c);
//     float a1=2.1;
//     float b1=2.4;
//     float f=5.0;
//     cout<<"\n";
//     AP(a1,b1,f);
//     cout<<endl;
//     char ch1='a';
//     AP(ch1,b,c);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std; 
// class Time1{
//     private:
//     int hour,minute;
//     public:
//     Time1(){}
//     Time1(int h,int m){
//         hour=h;minute=m;
//     }
//     void display(){
//         cout<<hour<<" : "<<minute<<endl;
//     }
//     int angle(){
//         int ang=0;
//         ang=abs(32*hour-5.5*minute);
//         return ang;
//         }
//     void check();
// };
// void Time1::check(){
//     int angl=angle();
//     if(angl>0&& angl<=90){
//         cout<<"acute\n";
//     }
//     else if(angl>90 && angl<=180)
// }


// #include<bits/stdc++.h>
// using namespace std; 
// class PiggyBank {
//     private:
//     int note_500,note_100,note_200,total_amt=0;
//     int x,y,z;
//     public:
//     PiggyBank(int a,int b ,int c) {
//         note_500=a;
//         note_100=b;
//         note_200=c;
//         total_amt+=200*c+100*b+500*a;
//     } 
//     void addMoney(int a,int b, int c){
//         note_500+=a;
//         note_100+=b;
//         note_200+=c;
//         total_amt+=500*a+100*b+200*c;
//     }
//     void takeOutMoney(int amt){
//         int r,y;
//         if(amt>total_amt || amt%100!=0)
//             cout<<"Error..."<<endl;
//         else{
//         total_amt-=amt;
//         r=amt/500;
//         if(r!=0){
//         if(r>note_500)
//             y=note_500;
//         else if(r>=1&&r<=note_500)
//             y=(amt/500);
//         note_500-=y;
//         amt-=(y*500);
//         }
//         r=amt/200;
//         if(r!=0)
//         {
//         if(r>note_200)
//             y=note_200;
//         else if(r>=1&&r<=note_200)
//             y=(amt/200);
//         note_200-=y;
//         amt-=(y*200);
//         }
//         r=amt/100;
//         if(r!=0){
//         if(r>note_100)
//             y=note_100;
//         else if(r>=1&&r<=note_100)
//             y=(amt/100);
//         note_100-=y;
//         amt-=(y*100);
//         }
//         cout<<"Thanku for making transection...\n";
//         }
//     }

//     void exchange(int rup)
//     {
//         int x=0,y=0,z=0;
//         if(rup%100!=0)
//             cout<<"Error...!\n";
//         else{
//             if(rup>=500)
//             {
//                 x=rup/500;
//                 rup-=(500*x);
//             }
//             if(rup>=200)
//             {
//                 y=rup/200;
//                 rup-=(y*200);
//             }
//             if(rup>=100)
//             {
//                 z=rup/100;
//             }
//             cout<<"500 : "<<x<<" 100 : "<<z<<" 200 :  "<<y<<"\n";
//         }
//     }
//     void display()
//     {
//         cout<<"500 notes : "<<note_500<<endl;
//         cout<<"100 notes : "<<note_100<<endl;
//         cout<<"200 notes : "<<note_200<<endl;
//         cout<<"Total amount : "<<total_amt<<endl;
//     }
// };
// int main(){
//     PiggyBank pg(5,6,8);
//     int ch,a,b,c,amt1,rup1;
//     cout<<"Enter the choice \n1.) addmoney \n2.) takeoutmoney \n3.)exchange \n4.) Dispaly \n5.)Exit\n";
//     do{
//         cin>>ch;
//         switch (ch)
//         {
//             case 1: {
//             cout<<"Enter the money to be added 500/100/200 : \n";
//             cin>>a>>b>>c;
//             pg.addMoney(a,b,c);
//             break;}
//             case 2: {
//             cout<<"Enter the amount to be taken out : \n";
//             cin>>amt1;
//             pg.takeOutMoney(amt1);
//             break;}
//             case 3:{ 
//             cout<<"enter the amount for exchange : \n";
//             cin>>rup1;
//             pg.exchange(rup1);
//             break;}
//             case 4: 
//             pg.display();
//             break;
//             case 5: 
//             cout<<"Exit..!\n";
//             break;
//         }
//     }while(ch!=5);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// int main(int argc,char *argv[])
// {
//     if(argc!=2){
//         cout<<"vbbdj\n";
//         return 1;
//     }
//     ofstream out(argv[1]);
//     if(!out){
//         cout<<"file not found : \n"; 
//         return 1;
//     }
//     char st[50];
//     int i=0;
//     cout<<"enter the string : \n";
//     do{
//         cin>>st[i];
//         out<<st[i];
//         i++;
//     }while(st[i]!='!');
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ofstream out;
//     ifstream in;
//     int count=0,line1=0;
//     string st,line;
//     cin>>line;
//     in.open("dev.txt",ios::in);
//     while(!in.eof())
//     {
//         in>>st;
//         if(st==line)
//             count++;
//     }
//     cout<<count;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// int main()
// {
//     ofstream out("dev.txt",ios::app);
//     ifstream in("dev1.txt",ios::in);
//     string str;
//     while(!in.eof())
//     {
//         getline(in,str);
//         out<<str<<'\n';
//     }
//     cout<<"copied successfully\n";
//     out.close();
//     in.close();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[4][4],i,j,b[4][4],f=0;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             b[i][j]=a[i][j];
//         }
//     }
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++){
//             if(b[i][j]!=-(a[i][j]))
//             {
//                 f=1;
//                 break;
//             }
//         }
//     }
//     if(f==1)
//         cout<<"not skey symmetric\n";
//     else
//         cout<<"skey symmetric";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// struct coach
// {
//     int pass;
// };
// int main()
// {
//     coach ch[5];
//     int sum=0,sum1[5];
//     sum1[0]=0;
//     cout<<"enter the number of passenger in coaches :\n";
//     for(int i=0;i<5;i++){
//         cin>>ch[i].pass;
//         sum+=ch[i].pass;
//         }
//     sum1[0]=ch[0].pass; 
//     for(int i=1;i<5;i++){
//         sum1[i]=sum1[i-1]+ch[i].pass;
//     }
//     cout<<endl;
//     int x,y,meet;
//     cin>>x>>y;int t1=0,t2=0;
//     int s1=0,s2=sum;
//     while(s2>s1)
//     {
//         s1=s1+x;
//         s2=s2-y;
//         t1++;
//         t2++;
//     } 
//     for(int i=0;i<4;i++){
//         if(s1>=sum1[i] && s1<=sum1[i+1])
//         {
//             meet=i+2;
//             break;
//         }
//     }
//     cout<<meet<<endl;
//     cout<<t1<<" min\n"<<t2<<" min";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Setinteger{
//     private:
//     set<int>num;
//     public:
//     Setinteger(){
//     }
//     Setinteger(set<int>n)
//     {
//         for(auto it:n)
//             num.insert(it);
//     }
//     Setinteger operator+(Setinteger s);
//     Setinteger operator-(Setinteger s);
//     Setinteger operator*(Setinteger s);
//     void show(){
//         for(auto it:num)
//             cout<<it<<" ";  
//         cout<<endl;     
//     }
// };
// Setinteger Setinteger :: operator+(Setinteger s){
//     Setinteger s2;
//     for(auto it:num)
//     {
//         for(auto it1:s.num)
//             s2.num.insert(it+it1);
//     }
//     return s2;
// }
// Setinteger Setinteger :: operator-(Setinteger s){
//     Setinteger s2;
//     for(auto it:num)
//     {
//         for(auto it1:s.num)
//             s2.num.insert(it-it1);
//     }
//     return s2;
// }
// Setinteger Setinteger :: operator*(Setinteger s){
//     Setinteger s2;
//     for(auto it:num)
//     {
//         for(auto it1:s.num)
//             s2.num.insert(it*it1);
//     }
//     return s2;
// }
// int main(){
//     Setinteger s({1,2,3,4,5}),s1({1,2,3,4,5}),s2;
//     s2=s+s1;
//     s2.show();
//     s2=s-s1;
//     s2.show();
//     s2=s*s1;
//     s2.show();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// class Equi_tri
// {
//     int side_t;
//     public:
//     Equi_tri(int s){side_t=s;}
//     int get(){
//         return side_t;
//     }
//     virtual int area()
//     {
//     return (((sqrt(3))/4)*(side_t*side_t));
//     }
// };
// class Square
// {
//     int side_s;
//     public:
//     Square(int s){side_s=s;}
//     int set(){
//         return side_s;
//     }
//     virtual int area()
//     {
//         // cout<<"Area of Square : " <<(side_s*side_s)<<endl;
//         return (side_s*side_s);
//     }
// };
// class ComposedPentagon:public Equi_tri,public Square
// {
//     public:
//     ComposedPentagon(int s,int s1):Square(s),Equi_tri(s1){}
//     virtual int area()
//     {
//         try{
//             if(get()!=set())
//             {
//                 throw 1;
//             }
//             else{
//                 int a1=Equi_tri::area();
//                 int a2=Square::area();
//                 cout<<"area of ComposedPentagon : "<<a1+a2;
//             }
//         }
//         catch(int){
//             cout<<"side not same : \n";
//         }
//     }
// };
// int main()
// {
//     Equi_tri eq(5),*bptr;
//     cout<<"Area of Traingle : "<< eq.area()<<endl;
//     Square sq(5);
//     cout<<"Area of Square : "<<sq.area()<<endl;
//     ComposedPentagon cp(5,5);
//     bptr=&cp;
//     bptr->area();
// }

// #include<bits/stdc++.h>
// using namespace std;
// template<class T>
// void intersection(T arr[],T arr1[],int n)
// {
//     T arr2[n];
//     int k=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(arr1[j]==arr[i])
//             {
//                 arr2[k]=arr1[i];
//                 k++;
//             }
//         }
//     }
//     for(int i=0;i<k;i++)
//         cout<<arr2[i]<<" ";
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9},arr1[]={1,2,6,4,3,5,12,34,89};
//     intersection(arr,arr1,9);
// }


// #include<bits/stdc++.h>
// using namespace std;
// using namespace std;
 
// class base {
//   public:
//     base()    
//     { cout << "Constructing base\n"; }
//     virtual ~base()
//     { cout<< "Destructing base\n"; }    
// };
 
// class derived: public base {
//   public:
//     derived()    
//      { cout << "Constructing derived\n"; }
//     virtual ~derived()
//        { cout << "Destructing derived\n"; }
// };

// int main()
// {
//     base *bptr;
//     derived d;
//     bptr=&d;
//     delete bptr;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Bicycle{
//     private:
//     string f_type,handle_type;
//     int dia;
//     public:
//     void getData(){
//         cout<<"enter the frame type, handle type,diameter : \n";
//         cin>>f_type>>handle_type>>dia;
//     }
//     void printData(){
//         cout<<"Frame type : "<<f_type<<endl;
//         cout<<"Handle type : "<<handle_type<<endl;
//         cout<<"Diameter : "<<dia<<endl;
//     }
// };
// class Motobike:public Bicycle
// {
//     int no_g,max_speed,engi_cap,met_read,fuel;
//     public:
//     void input(){
//         cout<<"gear : ";cin>>no_g;
//         cout<<"max_speed : ";cin>>max_speed;
//         cout<<"engi_cap : ";cin>>engi_cap;
//         cout<<"met_read : ";cin>>met_read;
//         cout<<"fuel : ";cin>>fuel;
//     }
//     void out(){
//         cout<<"gear : "<<no_g<<endl;
//         cout<<"speed : "<<max_speed<<endl;
//         cout<<"engi_cap : "<<engi_cap<<endl;
//         cout<<"met_read : "<<met_read<<endl;
//         cout<<"fuel : "<<fuel<<endl;
//     }
// };
// int main(){
//     Moto
// }

// #include<bits/stdc++.h>
// using namespace std;
// stack<int>s1,s2,s3;
// void insert()
// {
//     int n;
//     cout<<"insert : ";
//     cin>>n;
//     s1.push(n);
// }
// void delete1()
// {
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//     }
//     cout<<"deleted : "<<s2.top()<<endl;;
//     s2.pop();
//     while(!s2.empty()){
//         s1.push(s2.top());
//         s2.pop();
//     }
// }
// void display(){
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s3.push(s1.top());
//         s1.pop();
//     }   
//     while(!s2.empty()){
//         cout<<s2.top()<<" ";
//         s2.pop();
//     }
//     while(!s3.empty()){
//         s1.push(s3.top());
//         s3.pop();
//     }
// }
// int main()
// {
//     int ch;
//     do{
//         cout<<"Enter the choice : \n1.)inset\n2.)Delete\n.3.)display4.)exit\n";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1:
//             insert();
//             break;
//             case 2:
//             delete1();
//             break;
//             case 3:
//             display();
//             break;
//         }
//     }while(ch!=4);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// struct list1{
//     int data;
//     struct list1 *next, *prev;
// };
// struct list1 *start=NULL;
// list1 * getnode(){
//     list1 *newnode=new list1;
//     int n;
//     cout<<"name : ";
//     cin>>n;
//     newnode->data=n;
//     newnode->next=NULL;
//     newnode->prev=NULL;
//     return newnode;
// }
// void createnode(){
//     list1 *newnode=getnode();
//     list1 *temp;
//     if(start==NULL){
//         start=newnode;
//         newnode->next=start;
//     }
//     else{
//         temp=start;
//         while(temp->next!=start)
//             temp=temp->next;
//         temp->next=newnode;
//         newnode->prev=temp;
//         newnode->next=start;
//     }
// }
// void display(){
//     list1 *temp;
//     if(start==NULL)
//         cout<<'e';
//     else{
//         temp=start;
//         while (temp->next!=start)
//         {
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<temp->data<<endl;
//     }
// }
// int main()
// {
//     int ch;
//     do
//     {
//         cout<<"\n1.)insert\n2.)Display\n3.)exit\n";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1:
//             createnode();
//             break;
//             case 2:
//             display();
//             break;
//             case 3:
//             break;
//         }
//     } while (ch!=3);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define size 5
// int queue1[5];
// int front=-1,rear=-1;
// void insert_front()
// {
//     if(front==rear+1)
//         cout<<"Full\n";
//     else
//     {
//         if(front==-1 && rear!=size-1)
//             front=size-1;
//         else
//             front--;
//         int n;
//         cout<<"enter the element :\n";
//         cin>>n;
//         queue1[front]=n;
//     }
// }
// void insert_rear()
// {
//     if(rear==size-1||rear==front-1)
//         cout<<"Full\n";
//     else{
//         if(rear==-1)
//         {
//             rear=0;
//         }
//         else if(rear==size-1 && front!=0)
//             rear=0;
//         int n;
//         cout<<"enter the element :\n";
//         cin>>n;
//         queue1[rear++]=n;
//     }
// }
// void display()
// {
//     if(front<rear){
//     for(int i=front;i<rear;i++)
//         cout<<queue1[i]<<" ";
//     }
//     else{
//     for(int i=0;i<rear;i++)
//         cout<<queue1[i]<<" ";
//     for(int i=front;i<size;i++)
//         cout<<queue1[i]<<" ";
//     }
// }
// void front_delete()
// {
//     if(front==-1)
//         cout<<"empty\n";
//     else{
//     if(front==size-1)
//         front=0;
//     if(front==rear)
//         front=-1;
//     else
//         cout<<"deleted : "<<queue1[front++]<<endl;
//     }
// }
// void rear_delete(){
//     if(rear==-1)
//         cout<<"empty\n";
//     else{
//         if(rear==0)
//             rear=size-1;
//         if(rear==front)
//             rear=-1;
//         else{
//             cout<<"deleted : "<<queue1[rear]<<endl;
//             rear--;}
//     }
// }
// int main()
// {
//     int ch,i;
//      do{
//     cout<<"\nEnter the choice  : \n1.)insert_rear\n2.)insert_front\n ";
//     cin>>ch;
//     switch (ch)
//     {
//     case 1:
//         insert_rear();
//         break;
    
//     case 2:
//         insert_front();
//         break;//*/

//         case 3:
//         display();
//         break;
//         case 4:
//         front_delete();
//         break;
//         case 5:
//         rear_delete();
//         break;

//     }

//      }while(ch!=6);
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #define size 5

// int front=-1,rear=-1;
// int queueS[size];
// void insertFront(){
//     if(rear == size-1){
//         printf("Stack overflow");
//     }else if(front == -1 &&  rear == -1){
//         front=rear=0;
//     }else{
//         front += 1;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0,f=0;
        vector<int >res;
        for(i=0;i<=nums.size();i++)
        {
            for(j=i+1;j<=nums.size();j++)
            {
                if((nums[i]+nums[j]==target)){
                    res.push_back(i);
                    res.push_back(j);
                    f=1;
                    break;
                }
                }
            if(f==1)
                break;
        }    
        return res;
    }
};

int main() {
    Solution sl;
    vector<int>as,ad;
    int t;
    t=7;
    as={1,2,3,4,5,6};
    ad=sl.twoSum(as,t);
}