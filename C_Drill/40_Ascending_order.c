#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Num[9];
  int Asc[9];
  long Number;
  long x;
  long y;
  int temp;

  printf("Input 9 digit Number : ");
  scanf("%d", &Number);

  y = 100000000;
  for (int i = 0; i < 9; i++)
  {
    x = Number / y;
    Num[i] = x;
    Number = Number - (x * y);
    y = y / 10;
  }

  printf("\nThe Numbers are :- ");
  for (int i = 0; i < 9; i++)
  {
    printf("%d  ", Num[i]);
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (Num[i] < Num[j])
      {
        temp = Num[i];
        Num[i] = Num[j];
        Num[j] = temp;
      }
    }
  }

  printf("\nFrom Smaller to Greater : ");
  for (int i = 0; i < 9; i++)
  {
    printf("%d ", Num[i]);
  }

  return 0;
}