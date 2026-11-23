#include <stdio.h>

int main(void) {
    int a[3];

    for (int i=0;i<3;i++) {
        scanf("%d", &a[i]);
    }
        printf("#");
    for (int i=0;i<3;i++) {
        if (a[i]>255) {
            a[i]=255;
        }
        printf("%02X", a[i]);
        }

    return 0;
}
