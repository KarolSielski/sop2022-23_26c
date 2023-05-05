#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[10];
    int i, j, height;
    printf("Podaj wysokosc: ");
    scanf("%s", num);

    height = atoi(num);

    if (height == 0)
    {
        printf("Error");
        return 1;
    }

    for (i = 1; i <= height; i++)
    {
        for (j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}