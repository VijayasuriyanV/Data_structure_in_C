//Program to evaluate Expression
#include <stdio.h>
int main(){
int a,b,c,d,e,shift,f,*addr;
//Arithmetic Expression
a = (9 * 2) -6+8;
printf("The arithmetic expression returns: %d\n", a);
//Relational Expression
b = 8;
printf("The relational expression returns: %d\n", b % 2 == 0);
//Logical Expression
c = (5 > 4) && ( 7 <= 8);
printf("The logical expression returns: %d\n", c);
//Conditional Expression
d = (21 > 9) ? 1 : 0;
printf("The conditional expression returns: %d\n", d);
//Bitwise Expression
e = 10;
shift = 10 >> 1;
printf("The bitwise expression returns: %d\n", shift);
//Pointer Expression
f = 10;
addr = &f;
printf("The pointer expression returns: %p\n",addr);
getch();
return 0;
}
