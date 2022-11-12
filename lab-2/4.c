#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long int state = 0, s = 1;

    printf("Input n > 2: ");
    scanf("%d", &n);
    
    if ((n % 2) == 0) {
        for (int i = 2; i <= n; i += 2) {
            s *= i;
            printf("%d\n", i);
        }
    } else {
        for (int i = 1; i <= n; i += 2) {
            s *= i;
            printf("%d\n", i);
        }
    }

    printf("%ld", s);

    return 0;
}