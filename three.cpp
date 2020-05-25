#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,a[100000],gp,sum,ngp,i,j;
 cin>>n;
if(n%2==0){
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
		sum=a[i]+a[j];
		gp=sum/10;
		ngp=sum%10;
		cout<<gp<<" "<<ngp;
		cout<<"\n";
	}
}
	return 0;
}