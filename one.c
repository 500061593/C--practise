#include <stdio.h>
int main() {
	// Write your code here
    int a[1000000],even=0,odd=0,n;
	scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==0 && a[i]%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    printf("%d %d",even,odd);
    return 0;
}