#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input y: ");
    scanf("%d", &y);

    if (x > 0) {
        if (y > 0) {
            printf("1 chetvert'");
        }
    } else if (x < 0) {
        if (y > 0) {
            printf("2 chetver'");
        }
    } else if (x < 0) {
        if (y < 0) {
            printf("3 chetvert'");
        }
    } else if (x > 0) {
        if (y < 0) {
            printf("4 chetvert'");
        }
    }

    return 0;
}