#include<stdio.h>
int main(){
    int first,second,third;
    printf("enter first number:");
    scanf("%d",&first);
    printf("enter second number:");
    scanf("%d",&second);
    printf("enter third number:");
    scanf("%d",&third);
    if (first<second)
    {
        if(first<third)
          printf("%d is smallest",first);
        else
          printf("%d is smallest",second);  
    }
    else{
        if(second<third){
            printf("%d is smallest",second);
        }
        else
        printf("%d is smallest",third);
    }
    return 0;
    
    }
    
