#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    int d=0;
    printf("Radius: ");
    scanf("%d", &r);
    if(r<0){
        r=abs(r);
    }
    d=2*r;
    printf("The answer is %d\n", d);
    return 0;
}
