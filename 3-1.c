#include <stdio.h>

int main(void)
{
    int x, y;

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("%d", y);
    }
    else if (x > y)
    {
        printf("%d", x);
    }

    return 0;
}