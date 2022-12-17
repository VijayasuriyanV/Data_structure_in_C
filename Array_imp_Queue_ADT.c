//ARRAY IMPLEMENTATION OF QUEUE ADT
#include<stdio.h>
#define SIZE 10

int main()
{
    int queue[SIZE],choice,front=0,rear=0,i,j=1,x=SIZE;
    
    printf("***********Queue using Array*********** "); 
    while(1)
    {
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit "); 
        printf("\nEnter the Choice:");
        scanf("%d",&choice); 
        switch(choice)
        {
        
            case 1:
            if(rear==SIZE)
            printf("\n Queue is Full "); 
            else
            {
            printf("\n Enter the value %d:",j++);
            scanf("%d",&queue[rear++]);
            }
            break ;
            case 2:
            if(front==rear)
            {
            printf("\n Queue is empty");
            
            }
            else
            {
            printf("\n Deleted Element is %d",queue[front++]);
            x++;
            }
            break; 

            case 3: 
            printf("\n Queue Elements are:\n"); 
            if(front==rear) 
            printf("\n Queue is Empty"); 
            else 
            { 
                for(i=front; i<rear; i++)
                { 
                printf("%d",queue[i]); 
                printf("\n");
                }
                break;
                case 4:
                exit(0);
                default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
}