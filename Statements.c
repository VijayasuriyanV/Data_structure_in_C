//Program to Swap Numbers Using Temporary Variable
#include <stdio.h>
int main()
{
int firstNumber, secondNumber, temp;
printf("Enter first number: ");
scanf("%d", &firstNumber);
printf("Enter second number: ");
scanf("%d",&secondNumber);
// Value of first Number is assigned to temporary Variable
temp = firstNumber;
// Value of second Number is assigned to first Number
firstNumber = secondNumber;
// Value of temporary Variable (which contains the initial value of first Number) is assigned to second Number
secondNumber = temp;
printf("\nAfter swapping, firstNumber = %d", firstNumber);
printf("\nAfter swapping, secondNumber = %d", secondNumber);
return 0;
}