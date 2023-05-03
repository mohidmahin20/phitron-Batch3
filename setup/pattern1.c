#include <stdio.h>

int main() {
    int i, j, k,l;
    scanf("%d",&l);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = (l-1); i >= 1; i--) {
        for (j = 1; j <= l - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
