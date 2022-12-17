//ARRAY IMPLEMENTATION OF LIST ADT
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void create();
void deletion();
void search();
void display();

int arr[20], n,key,i, pos;//global variable

int main()
{
    int ch;
    char g='y';

    do
    {
    printf("\n Main Menu");
    printf("\n 1.Create \n 2.Delete \n 3.Search \n 4.Display\n 5.Exit \n");
    printf("\n Enter your Choice");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
    create();
    break;
    case 2:
    deletion();
    break;
    case 3:
    search();
    break;
    case 4:
    display();
    break;
    case 5:
    exit(0);
    break;
    default:
    printf("\n Enter the correct choice:");
    }
    printf("\n Do u want to continue: Y for Yes -- N for No:");
    scanf("%s",&g);
    }
    while(g=='y'||g=='Y');
    
}

void create()
{
    printf("\n Enter the number of nodes:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    printf("\n Enter the Element %d:",i+1);
    scanf("%d", &arr[i]);
    }
}
void deletion()
{
    printf("\n Enter the position u want to delete::");
    scanf("%d", &pos);
    if(pos>=n)
    {
    printf("\n Invalid Location::");
    }
    else
    {
    for(i=pos;i<n;i++)
    {
    arr[i-1]=arr[i];
    }
    n--;
    }
    printf("\n The Elements after deletion");
    for(i=0;i<n;i++)
    {
    printf("\t%d",arr[i]);
    }
}
void search()
{
    printf("\n Enter the Element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(arr[i]==key)
    {
    printf("Value is in the %d Position", i+1);
    break;
    }
    if(i==n)
    {
    printf("Value %d is not in the list::", key);
    }
}
void display()
{
    printf("\n The Elements of The list ADT are:");
    for(i=0;i<n;i++)
    {
    printf("\n\n%d", arr[i]);
    }
}
