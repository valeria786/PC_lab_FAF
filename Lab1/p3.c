#include <stdio.h>
#include <string.h>

int main()
{
    char a[60],b[60], sum[62];
    int lenA, lenB, maxLen, carry=0;

    scanf("%s %s", a, b);

    lenA = strlen(a);
    lenB = strlen(b);

    for (int i=0;i<lenA/2;i++) {
        char t=a[i];
        a[i]=a[lenA-1-i];
        a[lenA-1-i]=t;
    }

    for (int i=0;i<lenB/2;i++) {
        char t=b[i];
        b[i]=b[lenB-1-i];
        b[lenB-1-i]=t;
    }

    maxLen=(lenA>lenB) ? lenA : lenB;

    for (int i=0;i<maxLen;i++) {
        int dA=(i<lenA)?(a[i]-'0'):0;
        int dB=(i<lenB)?(b[i]-'0'):0;

        int total=dA+dB+carry;
        sum[i]=(total%10)+'0';
        carry=total/10;
    }

    if (carry>0) {
        sum[maxLen]=carry+'0';
        maxLen++;
    }
    sum[maxLen]='\0';

    for (int i=0;i<maxLen/2;i++) {
        char t=sum[i];
        sum[i]=sum[maxLen-1-i];
        sum[maxLen-1-i]=t;
    }

    printf("Sum: %s\n", sum);

    return 0;
}

