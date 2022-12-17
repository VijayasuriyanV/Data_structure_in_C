//Find Average of 5 numbers
#include<stdio.h>

int main()
{

int avg=0,sum=0,i;
int num[5];

for(i=0;i<5;i++) 
{
printf("\n Enter number %d: ",(i+1));
scanf("%d",&num[i]);
}
for(i=0;i<5;i++)
{
sum=sum+num[i];
}
avg=sum/5;
printf("\n average of entered number is : %d",avg);

return 0;

}
