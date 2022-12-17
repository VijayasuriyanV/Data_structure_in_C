//Calculate Area of Shapes 
#include<stdio.h>
// function prototype or function declaration 
float square();
float rectangle();
float circle(float r);
int main()

{ 

float radius;
printf("\n\tArea of the Square:%.2f",square()); 
printf("\n\tArea of the Rectangle:%.2f",rectangle());

// calling rectange function call by value 
printf("\nEnter Radius of the Circle:");
scanf("%f",&radius);
printf("\n\tArea of the Circle:%.2f",circle(radius));

}


float square()
{
float side,area;
printf("\nEnter the Side Value:"); 
scanf("%f",&side);
area = side * side;
return area;
}

float rectangle()
{
float l, b; 
printf("\nEnter the Length:");
scanf("%f",&l);
printf("\nEnter the Breadth:"); 
scanf("%f",&b);
float area=l*b; 
return area;
}

float circle(float r)
{
float area= 3.14*r*r;
return area;
}