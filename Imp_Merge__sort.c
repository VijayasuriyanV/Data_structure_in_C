//IMPLEMENTATION OF MERGE SORT
#include<stdio.h>

void mergesort(int array[], int first, int last);
void merge(int array[], int first, int mid, int last);

int main() {
   int array[30], n, i;

   printf("\n ******** MERGE SORT ************n\n");
   printf("Enter no of elements:");
   scanf("%d", & n);
   printf("Enter array elements:");
   for (i = 0; i < n; i++)
      scanf("%d", & array[i]);
   mergesort(array, 0, n - 1);
   printf("\nSorted array is :");
   for (i = 0; i < n; i++)
      printf("%d ", array[i]);
   return 0;
}
void mergesort(int array[], int first, int last) {
   int mid;
   if (first < last) {
      mid = (first + last) / 2;
      mergesort(array, first, mid); //left recursion
      mergesort(array, mid + 1, last); //right recursion
      merge(array, first, mid, last); //merging of two sorted sub-arrays
   }
}
void merge(int array[], int first, int mid, int last) {
   int temp[50]; //array used for merging
   int i, j, k, s;
   i = first; //beginning of the first list
   j = mid + 1; //beginning of the second list
   k = first;
   while (i <= mid && j <= last) //while elements in both lists
   {
      if (array[i] < array[j]) {
         temp[k] = array[i];
         i++;
      } else {
         temp[k] = array[j];
         j++;
      }
      k++;
   }
   if (i > mid) {
      for (s = j; s <= last; s++) {
         temp[k] = array[s];
         k++;
      }
   } else {
      for (s = i; s <= mid; s++) {
         temp[k] = array[s];
         k++;
      }
   }
   for (k = first; k <= last; k++) {
      array[k] = temp[k];
   }
}