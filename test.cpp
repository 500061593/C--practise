#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<<sizeof(a);
	int *p=&a[10];
	cout<<sizeof(p);
	return 0;
}