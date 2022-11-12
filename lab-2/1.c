#include <stdio.h>
#include <stdlib.h>

// Создаем функцию с аргументами X и Y
void f(int x, int y)
{
    int s = 0;

    printf("X = %d \t %d\n", x, y);

    if (x > 0)
    {
        s = x + y;
        printf("S = x + y = %d", s);

        s = 0;
    }
    else if (x <= 0 && y < 0)
    {
        s = x * y;
        printf("S = x * y = %d", s);
        s = 0;
    }
    else
    {
        s = 5 * x;
        printf("S = 5 * x = %d", s);
    }
}

int main()
{
    int x, y;

    printf("Input x: ");
    scanf("%d", &x);

    printf("\nInput y: ");
    scanf("%d", &y);

    f(x, y);

    return 0;
}