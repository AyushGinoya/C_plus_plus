#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n :");
    scanf("%d",&n);

    if(n>0){
        printf("+Ve");
    }else if(n<0){
        printf("-Ve");
    }else{
        printf("Zero");
        }
  return 0;
}
