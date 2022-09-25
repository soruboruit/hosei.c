#include <stdio.h>

int main(void)
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    printf("%d-%d=%d\n", x, y, x - y);
    printf("%dx%d=%d\n", x, y, x * y);
    printf("%d÷%d=%d\n", x, y, x / y);
    printf("%d+%d=%d\n", x, y, x + y);

    return 0;
}
