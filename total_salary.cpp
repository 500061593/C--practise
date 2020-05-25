#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int basic,hra,da,pf,allow,total_sal;
    char grade;
    cin>>basic;
    cin>>grade;
    hra=basic*(0.2);
    da=basic*(0.5);
    pf=basic*(0.11);
    if(grade=='A')
        allow=1700;
    else if(grade=='B')
        allow=1500;
    else
        allow=1300;
    
    total_sal=(basic + hra + da + allow)-pf;
    cout<<total_sal;
    return 0;
	
}
