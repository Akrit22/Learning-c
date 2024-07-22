#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf(" enter n ");
    scanf("%d",&n);


    int sum=0;
    for(int i=1;i<=n;i++){
    sum=sum+i;
    }
    for(int i=n;i>=1;i--){
    printf("\n%d",i);
    }
    printf("\nsum is %d",sum);
    
    return 0;
}