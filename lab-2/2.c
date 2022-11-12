#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int z = 0, x;

    printf("Input x: ");
    scanf("%d", &x);

    if (x != 0) {
        z = (pow(x, 2) - cos(log(sqrt(abs(x))) / tan(exp(-x))));

        printf("%d", z);
    } else {
        printf("Error, x == 0");
    }
    
    return 0;
}