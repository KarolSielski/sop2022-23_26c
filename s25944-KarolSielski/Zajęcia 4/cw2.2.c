#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int amount, i;
    char *myNumber;
    FILE *fptr;

    if (argc == 1)
    {
        fptr = fopen("numbers.txt", "r");
    }
    else if (argc == 2)
    {
        fptr = fopen(argv[1], "r");
    }
    else
    {
        printf("Przyjmuje tylko jeden argument :)");
        return 0;
    }

    printf("Podaj ile liczb ma byc odczytanych: ");
    scanf("%d", &amount);

    myNumber = (char *)malloc(100 * amount * sizeof(char));

    if (myNumber == NULL)
    {
        printf("Nie udalo sie zaalokowac pamieci.");
        return 1;
    }

    for (i = 0; i < amount; i++)
    {
        fgets(myNumber + i * 100, 100, fptr);
    }

    for (i = amount - 1; i >= 0; i--)
    {
        printf("%s", myNumber + i * 100);
    }

    free(myNumber);

    fclose(fptr);
    return 0;
}