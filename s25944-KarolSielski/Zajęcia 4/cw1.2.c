#include <stdio.h>

int main(){
    int number, sum = 0;
do{
    number = 0;
    printf("Podaj liczbe: ");
    scanf("%d", &number);
    sum += number;
} while (number != 0);

    return sum;
}