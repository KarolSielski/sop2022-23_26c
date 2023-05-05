#include <stdio.h>

int main(){
    int amount, i;
    char myNumber[100];
    FILE *fptr;

    printf("Podaj ile liczb ma byc odczytanych: ");
    scanf("%d", &amount);

    fptr = fopen("numbers.txt", "r");
    for (i = 0; i < amount; i++)
    {
        fgets(myNumber, 100, fptr);
        printf("%s", myNumber);
    }

    fclose(fptr);
    return 0;
}