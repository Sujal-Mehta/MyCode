/**
 * @Author: ironman
 * @Date:   2021-05-30T04:18:26-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-30T04:32:46-04:00
 */

#include "stdio.h"

int main()
{
  int a[4]; //it means we can store  4 value in 1 variable

  printf("Enter the marks obtain by sujal in sequence phy,che,bio,comp\n");
  //taking value in this variable noting  point is that the array start from 0 and goes on
  scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
  //printing the arrrays value or value which we have already taken
  printf("Marks obtain by a in \n phy : %d \n che : %d \n bio : %d \n \t And in \n comp : %d ", a[0], a[1], a[2], a[3]);

  printf(" \n the array is :");
  for (int i = 0; i < 4 ; i++)
  {
      if (i == 4) {
        printf("%d ", a[i]);
        break ;
      }
    printf("\t %d \t ", a[i]);
  }

  return 0;
}
