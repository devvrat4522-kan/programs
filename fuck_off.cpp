// // #include<bits/stdc++.h>
// // using namespace std;
// // struct Node
// // {
// //     int data;
// //     Node *next;
// //     Node(int data){
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };
// // void insert_begin(Node* &head,int d){
// //     Node* temp=new Node(d);
// //     temp->next=head;
// //     head=temp;
// // }
// // void insert_end(Node* &head,int d)
// // {
// //     Node* temp=new Node(d);
// //     Node* tail=head;
// //     while(tail->next!=NULL)
// //         tail=tail->next;
// //     tail->next=temp;
// //     tail=temp;
// // }
// // void insert_middle(Node* &head,int pos,int d){
// //     Node *temp=head;
// //     int i=1;
// //     if(pos==1)
// //     {
// //         insert_begin(head,d);
// //         return;
// //     }
// //     while(i<=pos-1)
// //     {
// //         temp=temp->next;
// //         i++;
// //     }
// //     if(temp->next==NULL)
// //     {
// //         insert_end(head,d);
// //         return;
// //     }
// //     Node* gh=new Node(d);
// //     gh->next=temp->next;
// //     temp->next=gh;
// // }
// // void print(Node* &head){
// //     Node *temp=head;
// //     while(temp!=NULL)
// //     {
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// // }
// // int main()
// // {
// //     Node *node=new Node(5);
// //     Node *head=node;
// //     insert_begin(head,5);
// //     insert_begin(head,10);
// //     insert_end(head,56);
// //     insert_middle(head,2,89);
// //     insert_middle(head,1,8);
// //     print(head);
// //     cout<<head->data<<endl;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // bool search(int *arr ,int size,int s)
// // {
// //     if(size==0)
// //         return false;
// //     if(arr[0]==s) 
// //         return true;
// //     else{
// //         bool dbfhbv = search(arr+1,size-1,s);
// //         return dbfhbv ;
// //     }

// // }
// // int main(){
// //     int arr[]={10,10,2,9,6,7};
// //     bool bfg = search(arr,6,8);
// //     if(bfg) 
// //         cout<<"found";
// //     else
// //         cout<<"Not found";
// // }

// // POWER BY RECURSION

// // #include<bits/stdc++.h>
// // using namespace std;
// // int power(int n,int p)
// // {
// //     if(p==0)
// //         return 1;
// //     if(p==1)
// //         return n;
// //     else
// //     {
// //         int ans=power(n,p/2);
// //         cout<<ans<<" ";
// //         if(p%2==0)
// //             return ans*ans;
// //         else
// //             return n*(ans*ans);
// //     }
// // }
// // int main()
// // {
// //     int n,p;
// //     cin>>n>>p;
// //     int res = power(n,p);
// //     cout<<res;
// // }

// // BUBBLE SORT RECURSION

// // #include<bits/stdc++.h>
// // using namespace std;
// // void swap(int &a,int &b)
// // {
// //     int temp=a;
// //     a=b;
// //     b=temp;
// // }
// // void sort(int *arr,int n)
// // {
// //     if(n==0 || n==1)
// //         return;
// //     else
// //     {
// //         for(int i=0;i<n;i++)
// //         {
// //             if(arr[i]>arr[i+1])
// //                 swap(arr[i],arr[i+1]);
// //         }
// //         return sort(arr,n-1);
// //     }
// // }
// // int main()
// // {
// //     int arr[10];
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++) 
// //         cin>>arr[i];
// //     sort(arr,n);
// //     cout<<"sorted\n";
// //     for(int i=0;i<n;i++)
// //         cout<<arr[i]<<" ";
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // void sort(int *arr,int n)
// // {
// //     if(n==0 || n==1)
// //         return;
// //     else
// //     {
        
// //     }
// // }
// // int main()
// // {
// //     int n,arr[10];
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //         cin>>arr[i];
// //     sort(arr,n);
// //     cout<<"sorted\n";
// //     for(int i=0;i<n;i++)
// //         cout<<arr[i]<<" ";
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// void merge(int arr[], int l, int m, int r)
//     {
//         int i,j,k;
//         k=l;
//         int n1=m+l+1,n2=r-m;
//         int a[n1],b[n2];
//         for(i=0;i<n1;i++)
//             a[i]=arr[i+l];
//         for(i=0;i<n2;i++)
//             b[i]=arr[i+m+1];
//         i=0;j=0;    
//         while(i<m && j<r)
//         {
//             if(a[i]<b[j])
//             {
//                 arr[k]=a[i];
//                 i++;
//             }
//             if(b[j]<a[i])
//             {
//                 arr[k]=b[j];
//                 j++;
//             }
//             k++;
//         }
//         while(i<m)
//             arr[k++]=a[i++];
//         while(j<r)
//             arr[k++]=b[j++];
//     }
//     void mergeSort(int arr[], int l, int r)
//     {
//         if(l>=r)
//             return ;
//         int mid=(l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// int main()
// {
//     int arr[]={1,8,3,4,9,5,2,0};
//     mergeSort(arr,0,7);
//     for(int i=0;i<8;i++)
//         cout<<arr[i]<<" ";
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st={9,2,8,5,4,9};
    set<int> :: iterator it=st.begin();
    cout<<(*it+1);

}