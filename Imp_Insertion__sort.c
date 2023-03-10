//IMPLEMENTATION OF INSERTION SORT

#include<stdio.h>

int main() {

  int data[100], n, temp, i, j;
  printf("\n\t ** ** ** ** ** * INSERTION SORT ** ** ** ** ** * ");
  printf("\nEnter number of terms: ");
  scanf("%d", & n);
  printf("Enter elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", & data[i]);
  }

  for (i = 1; i < n; i++) 
  {
    temp = data[i];
    j = i - 1;
    while (temp < data[j] && j >= 0)
     {
      data[j + 1] = data[j];
      --j;
     }
    data[j + 1] = temp;
  }
  printf("Sorted list in ascending order: ");
  for (i = 0; i < n; i++)
    printf("%d\t", data[i]);
  return 0;
}