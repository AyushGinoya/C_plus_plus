#include<stdio.h>

void main(){

    char op;
    float a,b;
    printf("Enter op :");
    scanf("%c",&op);
    printf("Enter num :");
    scanf("%d%d",&a,&b);


    switch(op){
    case '+':
        printf("%f",a+b);
        break;
    case '-':
        printf("%f",a-b);
        break;
    case '*':
        printf("%f",a*b);
        break;
    case '/':
        printf("%f",a/b);
        break;
    default :
        printf("Error");
    }
    }
