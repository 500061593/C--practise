	#include <iostream>
using namespace std;

int main(){
	int i;
	int* j=&i;
	int& k=i;
	cout<<&i<<endl;
	cout<<&j<<endl;
	cout<<&k<<endl;
	return 0;
}
