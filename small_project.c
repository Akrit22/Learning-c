#include<stdio.h>
#include<math.h>
int main(){
    printf("1. ADDITION OF TWO NUMBERS\n");
    printf("2. MULTIPLICATION OF TWO NUMBERS\n");
    printf("3. TO CALCULATE SIMPLE INTEREST\n");
    printf("4. QUADRATIC EQUATION CALCULATOR(finding roots of equation)\n"); 
    printf("5. TABLE OF ANY NUMBER\n");
    printf("6. FACTORIAL OF ANY NUMBER\n");
    int S_no ;
    int a,b,c;
    int p,n;
    float pi,r;
    float rr,r1,r2,d;
    printf("enter the s_no u want to do: \n");
    scanf("%d",&S_no);
    switch(S_no)
    {
    case 1:
    
    printf("     ADDITION OF TWO NUMBERS\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("sum of a and b is %d",a+b);
        break;

    case 2:

    printf("       MULTIPLICATION OF TWO NUMBERS\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("answer is %d",a*b);
      break;

    case 3:

    printf("       TO CALCULATE SIMPLE INTEREST\n");  
    printf("enter the principal amt.   ");
    scanf("%d",&p);
    printf("enter the no. of years   ");
    scanf("%d",&n);
    printf("enter rate of interest    ");
    scanf("%f",&r);
    printf(" simple interest is %f",p*n*r/100);
break;

    case 4:

     printf("       QUADRATIC EQUATION CALCULATOR(finding roots of equation)\n"); 

        printf("enter the value of cofficient a,b and c : \n ");
    scanf("%d%d%d",&a,&b,&c);
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
        rr=-b/(2*a);
        printf("roots are equal");
        printf("root1=root2: %f",rr);
    }
    else{
        printf("invalid data");
    }
    break;

    case 5:

    printf("              TABLE OF ANY NUMBER \n");
    printf("enter n:  ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        printf("%d \n",n*i);}
    
    break;

    case 6:
    
    printf("          FACTORIAL OF ANY NUMBER\n");
    printf("enter n:  ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("final factorical is %d",fact);

    break;

    
    default: printf("invalid S_no\n^^^^^^^^^^^^^^^");

    }


return 0;
}
