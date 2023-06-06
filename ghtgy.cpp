#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) 
	{
	    long long a,s;
	    cin>>a>>s;
	    vector<long long>res;
	    int f=0;
	    while(s!=0) 
	    {
		    int r1=a%10;
            int r2=s%10;
		    a/=10; 
            s/=10;
		    if(r2<r1) 
		    {
			    r2+=10*(s%10);
			    s/=10;
			    if(r2-r1>=10 || r2<r1) 
			    {
                    cout<<-1;
		    	    f=1;
		    	    break;
    			}
    		}
    		res.push_back(r2-r1);
    	}
    	if(a!=0)
    	{
    		cout<<-1<<'\n';
    	}
        if(f==1)
            continue;
    	while(res.back()==0) 
    	    res.pop_back();
    	reverse(res.begin(),res.end());
    	for(auto i:res) 
    	    cout<<i;
    	cout<<'\n';   
	}
}
// int r1=amt%100;
//         if(r1!=00 || amt>total_amt)
//             cout<<"Error...!\n";
//         else{
//             int r=amt/500;
//             if(r>=1 && r<=note_500)
//             {
//                 note_500-=(r);
//                 amt=amt-(500*r);
//                 total_amt-=(500*r);
//             }
//             else
//             {
//                 amt=amt-(note_500*500);
//                 note_500=0;
//                 total_amt-=(500*r);
//             }
//             r=amt/200;
//             if(r>=1 && r<=note_200)
//             {
//                 total_amt-=(r*200);
//                 note_200-=r;
//                 amt=amt-(r*200);
//             }
//             else{
                
//             }
//                 r=amt/100;
//                 if(r>=1)
//                 {
//                     total_amt-=(r*100);
//                     note_100-=r;
//                     amt=amt-(r*100);
//                 }