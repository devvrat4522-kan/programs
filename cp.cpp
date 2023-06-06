#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int t,i,n,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long arr[n],f=0,sum=0,k;
		for(i=0;i<n;i++)
			cin>>arr[i];
		
		for(i=0;i<n-1;i++)
		{
			if(arr[i]<0&&arr[i+1]<0)
			{
				k=i;f=1;
				break;
			}
		}
		arr[k]=-arr[k];
		arr[k+1]=-arr[k+1];
		for(i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		cout<<sum<<endl;;
	}
	return 0;
}

