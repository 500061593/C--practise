#include<bits/stdc++.h>
using namespace std;
int main()
{    int i,j,sum1=0,sum2=0,sum3=0,sum4=0,n,sum=0,a[100][100],s=0;
    cin>>n;
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
        cin>>a[i][j];
            
    }
    }
 for(i=1;i<n-1;i++){
      sum1=sum1+a[0][i];
	  sum1=sum1+a[n-1][i];
      
 }
  for(i=0;i<n;i++){
      sum1=sum1+a[i][n-1];
      sum1=sum1+a[i][0];
 }
 
  for( i=1;i<n-1;i++){
        for( j=1;j<n-1;j++){
			if(i==j){
			sum1=sum1+a[i][j];}
			else if(i+j==n-1){
			sum1=sum1+a[i][j];}
            
    }
    }
 
 
 cout<<sum1;
	return 0;
}