#include<stdio.h>
int main(){ 
// using (==)
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }else{
            printf("%d\n",i);
        }
    }

//using (!=)
    for(int i=5; i<=50; i++){
        if(i%2 !=0){
            printf("%d\n",i);
        }else{
            continue;
        }
    }
    return 0;
}