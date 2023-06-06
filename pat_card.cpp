// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> vc={3,2,2,3,2,2},vc1;
//     int val=3,count=0;
//     int j=0;
//     vector<int>::iterator it;
//     for(int i=0;i<vc.size();i++)
//     {
//         cout<<vc[i]<<" ";
//         if(vc[i]==val)
//         {
//             // cout<<"true ";
//             it=remove(vc.begin(),vc.end(),vc[i]);
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<vc.size();i++)
//         cout<<vc[i]<<" ";
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,arr[]={1,2,3,2,3};
    int i,arr1[5]={},f=0;
        vector<int>vc;
        if(n==1)
            {
                vc.push_back(-1);
                cout<<vc.begin();
            }
        for(i=0;i<n;i++)
        {
            arr1[arr[i]]++;
            if(arr1[i]>=2)
            {
                f=1;
                vc.push_back(arr[i]);
            }
        }
        if(f==0)
        {
            vc.push_back(-1);
            cout<<vc.begin();
        }
        else
            for(i=0;i<vc.size();i++)
                cout<<vc[i]<<" ";
    
}
