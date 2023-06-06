#include<bits/stdc++.h>
using namespace std;
struct product
{
    int pid;
    int rating;
};
product input_detail(struct product p)
{
	int i=1;
    cout<<"Product "<<i++<<endl;
    cout<<"Enter product id: ";
    cin>>p.pid;
    cout<<"Enter user rating: ";
    cin>>p.rating;
    return p;
}
void computerating(product *p,int &top,int &avg,int &low)
{
    if((p->rating)<3)
    	low++;
    else if(p->rating>=3 && p->rating<4)
    	avg++;
    else if(p->rating>=4)
    	top++;
}
void output_detail(struct product p)
{
    cout<<"Product id: "<<p.pid<<endl;
    cout<<"User rating: "<<p.rating<<endl;
    //computerating(&p,top,avg,low);
   
}

int main()
{
	int n,top=0,avg=0,low=0;
	cout<<"Enter number of Products: ";
	cin>>n;
    struct product p[n];
    struct product temp;
    int i;
    for(i=0;i<n;i++)
        p[i]=input_detail(temp);
    cout<<"\nPrinting product details: "<<endl;
    for(i=0;i<n;i++)
        output_detail(p[i]);
    for(i=0;i<n;i++)
        computerating(&p[i],top,avg,low);
    cout<<"TOP : "<<top<<endl;
    cout<<"AVARAGE : "<<avg<<endl;
    cout<<"LOW : "<<low<<endl;
    return 0;
}