#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],n,m;
    printf("Enter the number of elements in row:");
    scanf("%d",&n);
    printf("Enter the number of elements in column:");
    scanf("%d",&m);
    int sum[10][10],subt[10][10],multi[10][10];
    float div[10][10];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
        printf("Enter the elements of a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
        printf("Enter the elements of b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum[i][j]=a[i][j]+b[i][j];
            subt[i][j]=a[i][j]-b[i][j];
            multi[i][j]=a[i][j]*b[i][j];
            div[i][j]=a[i][j]/b[i][j];
        }
    }    
    printf("\n Addition\n");
     for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
        printf("%d\t",sum[i][j]);
        }
    }   
    printf("\n Subtract\n");

     for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
        printf("%d\t",subt[i][j]);
        }
    }   
    printf("\n Muliply\n");
     for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
        printf("%d\t",multi[i][j]);
        }
    }   
    printf("\n Divide\n");
     for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
        printf("%.2f\t",div[i][j]);
        }
    }   
    return 0;
}

