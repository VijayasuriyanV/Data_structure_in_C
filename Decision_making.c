//Check Divisible By Number
#include <stdio.h>

int main()
{
 int a ;
 printf("\n Enter a number:");
 scanf("%d",&a);

 if(a % 2 == 0)
 {
 printf("Number is Divisible by 2");
 }
 else if(a % 5 == 0)
 {
 printf("Number is Divisible by 5");
 }
 else if(a % 7 == 0)
 {
 printf("Number is Divisible by 7");
 }
 else
 {
 printf("Number is not Divisible by 2, 5 or 7");
 }

return 0;
} 