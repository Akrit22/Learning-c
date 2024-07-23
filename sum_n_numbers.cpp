#include<stdio.h>

// ........adding numbers ./
// eg  
//    input: n=32415
//    output: 15   //3+2+4+1+5
int main(){
	int n,sum=0;
	printf("enter the number :  ");
	scanf("%d",&n);
	while(n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	printf("sum of number is %d",sum);
	
	return 0;
}
