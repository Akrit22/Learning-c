#include<stdio.h>
int main(){
    int n;
    printf("enter n ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorical of %d is %d",n,fact);
    return 0;
}