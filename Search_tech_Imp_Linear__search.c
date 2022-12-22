//IMPLEMENTATION OF LINEAR SEARCH
#include<stdio.h>

int main() {
  int i, array[50], search, size;
  printf("Enter Size of array:");
  scanf("%d", & size);
  printf("Enter %d element in array: \n", size);
  for(i = 0; i < size; i++) {
    scanf("%d", & array[i]);
  }
  printf("Enter element for search: ");
  scanf("%d", & search);
  for (i = 0; i < size; i++) {
    if (array[i] == search) // if element is found
    {
      printf("\n%d is present at %d position", search, i + 1);
      break;
    }
  }
  if (i == size) {
    printf("\n %d is not found", search);
  }
}
