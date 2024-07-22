#include<stdio.h>
int main(){
    int n,a,r,s=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    a=n;
    do{
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    while(n>0);
    if (a==s){
        printf("%d is palindroime",a);
    }
    else{
        printf("%d is not a palindroime",a);
    }
    return 0;
}