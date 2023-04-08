#include <stdio.h>

int main()
{
    int m,n,y,d,t;

    printf("ENTER THE NUMBER OF DAYS : ");
    scanf("%d",&n);

    y=n/360;
    t=n%360;
    m=t/30;
    d=t%30;

    printf("year=%d month=%d day=%d",y,m,d);

    return 0;
}
