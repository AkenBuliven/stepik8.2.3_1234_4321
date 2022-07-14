#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

  int n, i, j;
  scanf("%d", &n);

  int array[n][n];

  for(i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if ((i %2) == 0)
      {
        array[i][j]= j+1;
      }
      else 
      {
        array[i][j] = j+1;
      }
    }
  } 
  printf("\n");

  for(i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", array[i][j]);
    }
   printf("\n");
  } 

  return 0;
   
}

