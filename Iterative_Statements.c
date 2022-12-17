//Program using While Loop to Print Multiplication Tables
#include<stdio.h>

int main()
{

int i=1,number,b;
printf("Enter a number: ");
scanf("%d",&number);
while(i<=10)
{
b=number*i;
printf("%d \n", b);
i=i+1;
}
return 0;

}