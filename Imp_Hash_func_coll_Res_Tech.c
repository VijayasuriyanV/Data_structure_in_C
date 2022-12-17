//IMPLEMENTATION HASH FUNCTIONS, COLLISION RESOLUTION TECHNIQUE

#include<stdio.h>
#include<limits.h>

void insert(int ary[], int hFn, int size) {
        int element, pos, n = 0;
        printf("\nEnter key element to insert:");
        scanf("%d", & element);
        pos = element % hFn;
        while (ary[pos] != INT_MIN) {
                if (ary[pos] == INT_MAX)
                        break;
                pos = (pos + 1) % hFn;
                n++;
                if (n == size)
                        break;
        }
        if (n == size)
                printf("Hash table was full of elements \n No Place to insert this element\n\n");
        else
                ary[pos] = element; //Inserting element
}
void delete(int ary[], int hFn, int size) {
        int element, n = 0, pos;
        printf("\nEnter element to delete:");
        scanf("%d", & element);
        pos = element % hFn;
        while (n++ != size) {
                if (ary[pos] == INT_MIN) {
                        printf("Element not found in hash table\n");
                        break;
                } else if (ary[pos] == element) {
                        ary[pos] = INT_MAX;
                        printf("Element deleted\n\n");
                        break;
                } else {
                        pos = (pos + 1) % hFn;
                }
        }
        if (--n == size)
                printf("Element not found in hash table\n");
}
void search(int ary[], int hFn, int size) {
        int element, pos, n = 0;
        printf("\nEnter element you want to search:");
        scanf("%d", & element);
        pos = element % hFn;
        while (n++ != size) {
                if (ary[pos] == element) {
                        printf("Element found at index :%d\n", pos);
                        break;
                } else
                if (ary[pos] == INT_MAX || ary[pos] != INT_MIN)
                        pos = (pos + 1) % hFn;
        }
        if (--n == size) printf("Element not found in hash table\n");
}
void display(int ary[], int size) {
        int i;
        printf("Index\tValue\n");
        for (i = 0; i < size; i++)
                printf("%d\t%d\n", i, ary[i]);
}
int main() {
        int size, hFn, i, choice;
        printf("\nEnter size of hash table:");
        scanf("%d", & size);
        int ary[size];
        printf("\nEnter hash function [if mod 10 enter 10]:");
        scanf("%d", & hFn);
        for (i = 0; i < size; i++)
                ary[i] = INT_MIN;
        do {
                printf(" 1) Insert\n 2) Delete\n 3) Display\n 4) Searching\n 5) Exit\n");
                printf("\n Enter your choice:");
                scanf("%d", & choice);
                switch (choice) {
                case 1:
                        insert(ary, hFn, size);
                        break;
                case 2:
                        delete(ary, hFn, size);
                        break;
                case 3:
                        display(ary, size);
                        break;
                case 4:
                        search(ary, hFn, size);
                        break;
                default:
                        printf("Enter correct choice\n");
                        break;
                }
        } while (choice);
        return 0;
}