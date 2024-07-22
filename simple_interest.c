#include<stdio.h>
int main(){
    int p;
    printf("enter the principal amt.   ");
    scanf("%d",&p);
        int n;
    printf("enter the no. of years   ");
    scanf("%d",&n);
    float r;
    printf("enter rate of interest    ");
    scanf("%f",&r);
    float si;
    si=p*n*r/100;
    printf(" simple interest is %f",si);
    return 0;
}