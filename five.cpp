#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,p,i,d,b,a[100000];
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];}
b=a[0];
for(i=1;i<n;i++){
d=a[i]-b;
if(d>p){
p=d;}
if(a[i]<b){
b=a[i];}
}
cout<<p;

	return 0;
}
