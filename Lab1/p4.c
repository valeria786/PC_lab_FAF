#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H,M,XH,XM,FH,FM,n,m,m2;
    printf("Current Hour and Minutes:");
    scanf("%d %d",&H, &M);
  
    printf("Set Hours and Minutes:");
    scanf("%d %d",&XH, &XM);

    FH = H + XH;
    FM = M + XM;
 
    FH = FH + FM / 60;
    FM = FM % 60;

    FH = FH % 24;

    printf("The alarm will ring at: %02d %02d\n", FH, FM);
    return 0;
}
