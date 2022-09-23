/*
#include <stdio.h>
int main(void)
{

    char soru[9];
    scanf("%s", soru);
    printf("My name is %s ", soru);
}
*/
#include <stdio.h>
#define number 5

int main(void)
{

    int a;
    int student[number];
    int min, min2;

    printf("5人の点数を入力してください。\n");
    for (a = 0; a < number; a++)
    {
        printf("%d番目の点数：", a + 1);
        scanf("%d", &student[a]);
    }

    min = student[0];

       return 0;
}