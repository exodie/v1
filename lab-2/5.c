#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, a, b, c;
    printf("Input value: ");
    scanf("%d", &m);

    a = b = 1;
    
    while (a < m + 1)
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("First min value > m => %d", a);

    return 0;
}