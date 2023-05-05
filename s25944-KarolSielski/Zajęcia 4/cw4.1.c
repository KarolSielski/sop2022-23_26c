#include <stdio.h>

int max(int elementArr[], int elementCount)
{
  int max = elementArr[0], i;

  for (i = 1; i < elementCount; i++)
  {
    if (elementArr[i] > max)
    {
      max = elementArr[i];
    }
  }
  return max;
}

int min(int elementArr[], int elementCount)
{
  int min = elementArr[0], i;

  for (i = 1; i < elementCount; i++)
  {
    if (elementArr[i] < min)
    {
      min = elementArr[i];
    }
  }
  return min;
}

int sum(int elementArr[], int elementCount)
{
  int sum = elementArr[0], i;
  for (i = 1; i < elementCount; i++)
  {
    sum += elementArr[i];
  }
  return sum;
}

int main()
{
  int (*arr[3])(int[], int) = {&max, &min, &sum};
  int i, result[3], functionId, elementCount, elementArr[100];

  printf("Podaj numer funckji: 0. Max, 1. Min, 2. Sum: ");
  scanf("%d", &functionId);

  printf("Podaj liczbe elementow: ");
  scanf("%d", &elementCount);

  for (i = 0; i < elementCount; i++)
  {
    printf("Argument %d\n", i, " :");
    scanf("%d", &elementArr[i]);
  }

  for (i = 0; i < 3; i++)
  {
    result[i] = arr[i](elementArr, elementCount);
  }

  printf("Wynik: %d\n", result[functionId]);

  return 0;
}