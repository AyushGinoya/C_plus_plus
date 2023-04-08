#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Enter three numbers : ");
   scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("a");
        }else{
            printf("c");
        }
    }else if(b>c){
        printf("b");
    }else{
        printf("c");
    }
    return 0;
}

