#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of students:");
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        printf("enter the students marks[%d]:",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",marks[i]);
    }
    printf("\n roll no. of students who got less than 35 marks:-\n ");
    for(i=0;i<n;i++)
        if(marks[i]<35){
            printf("%d  ",i+1);
        }
    return 0;

  
}