# stepik8.2.3_1234_4321


По заданному числу N сформировать матрицу (
N
×
N
N×N) следующего вида:

1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1

Входные данные:
Одно натуральное число 
N
N.

Выходные данные: 
Вывести на экран массив 
N
N на 
N
N, указанного вида. Числа разделять пробелами.

Sample Input 1:
4
Sample Output 1:
1 2 3 4 
4 3 2 1 
1 2 3 4 
4 3 2 1 


include <stdio.h>
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
        array[i][j] = n - j;
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

