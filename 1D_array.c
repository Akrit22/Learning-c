#include<stdio.h>
int main(){
    int a[10],b[10],n;
    printf("enter the number of elements :");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        printf("enter the elements of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("enter the elements of b[%d]:",i);
        scanf("%d",&b[i]);
    }
    printf("\n");
    int sum[10],subt[10],multi[10];
    float div[10];
    for(i=0;i<n;i++){
        sum[i]=a[i]+b[i];
        subt[i]=a[i]-b[i];
        multi[i]=a[i]*b[i];
        div[i]=a[i]/b[i];
    }
    
    printf("addition\tsubt\tmulti\tdiv\n");
    for(i=0;i<n;i++){
        printf("%d\t",sum[i]);
        printf("%d\t",subt[i]);
        printf("%d\t",multi[i]);
        printf("%.2f\n",div[i]);
    }
    return 0;
}