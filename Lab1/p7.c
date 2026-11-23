#include <stdio.h>
#include <math.h>

int main(void) {
    int a[4], b[4], k=0;

    scanf("%d.%d.%d.%d", &a[0], &a[1], &a[2], &a[3]);
    scanf("%d.%d.%d.%d", &b[0], &b[1], &b[2], &b[3]);

    k=(b[0]-a[0])*pow(256,3)+(b[1]-a[1])*pow(256,2)+(b[2]-a[2])*256+(b[3]-a[3]);

    printf("%d", k);

    return 0;
}
