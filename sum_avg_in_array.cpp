#include<stdio.h>

// .....to calculate sum or average of elements in an array../
int main(){
	int n,a[50],i,sum=0;
	float avg;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("\n enter elements ");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n sum of elements in an array: %d",sum);
	avg=sum/n;
	printf("\n average of elements in an array %.2f",avg);
	
	return 0;
}
