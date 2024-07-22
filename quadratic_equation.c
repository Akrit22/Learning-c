#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,r,r1,r2,d;
    printf("enter the cofficient a,b and c : \n ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("Value of d:%f \n",d);
    if(d<0){
        printf("roots are not real");
    }
    else if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf(" first root:%f \n",r1); 
        printf(" second root:%f ",r2);       
    }
    else if(d==0){
        r=-b/(2*a);
        printf("roots are equal");
        printf("root1=root2: %f",r);
    }
    else{
        printf("invalid data");
        printf("********");
    }
    return 0;
}