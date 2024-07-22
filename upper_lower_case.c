#include<stdio.h>
int main(){
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if(ch>='A'&& ch <='Z'){
        printf("\nUPPER CASE LETTER");
    }
    else if(ch>='a' && ch<='z'){
        printf("\nlower case letter");
    }
    else if(ch>='0' && ch<='9'){
        printf("\ndigits");
    }
    else if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96 )||(ch>=123 && ch<=127)){
        printf("\n special symbol");}
    else {
        printf("invalid!!!");
    }


    return 0;
}