#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,a[100000],i,j,s,e,sum,t,flag=0;
cin>>n;
cin>>t;
for(i=0;i<n;i++){
cin>>a[i];}
for(i=0;i<n;i++){
	sum=0;
	for(j=i;j<n;j++){
		sum=sum+a[j];
		if(flag==0){
		if(sum==t){
			flag=1;
			s=i;
			e=j;
			cout<<"true"<<"\n";
			for(i=s;i<=e;i++){
cout<<a[i]<<" ";}


			
			
		}}
		
	}
}
if(flag==0){
	cout<<"false";
}


	return 0;
}
