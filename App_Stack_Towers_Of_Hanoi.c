//APPLICATION OF STACK - TOWERS OF HANOI

#include<stdio.h>

int towers(int n,char fromplace,char toplace,char auxplace)
{ 
/* If only 1 disk, make the move and return */
if(n==1)
{ 
    printf("\nMove disk 1 from place %c to place %c",fromplace,toplace);
    return 0;
}
/* Move top n-1 disks from A to B, using C as auxiliary */
towers(n-1,fromplace,auxplace,toplace);
/* Move remaining disks from A to C */
printf("\nMove disk %d from place %c to place %c",n,fromplace,toplace);
/* Move n-1 disks from B to C using A as auxiliary */
towers(n-1,auxplace,toplace,fromplace);
}
int main()
{ 
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    printf("The Tower of Hanoi involves the moves :\n\n");
    towers(n,'A','C','B');
    return 0;
} 