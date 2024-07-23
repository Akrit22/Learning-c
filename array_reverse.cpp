#include<stdio.h>

// .....to reverse an array../
int main(){
	int n,a[50],i,temp;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("\n enter elements ");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n/2;i++){
		temp=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=temp;
	}
	printf("reverse array\n");
	for(i=1;i<=n;i++){
		printf("%d  ",a[i]);
	}
	
	return 0;
}
