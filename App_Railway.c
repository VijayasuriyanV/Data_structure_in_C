//REAL TIME APPLICATIONS- RAILWAY RESERVATION
#include<stdio.h>
#include<stdlib.h>
int first=5,second=5,i=0,c;
struct node
{
    int ticketno;
    long long int phoneno;
    char name[100]; 
    char  address[100];
} s[15];

void booking()
{
    printf("\nEnter your details");
    printf("\n Name:");
    scanf("%s",s[i].name); 
    printf("\nPhonenumber:");
    scanf("%lld",&s[i].phoneno);
    printf("\n Address:");
    scanf("%s",s[i].address);
    printf("\n Ticketnumber only 15:");
    scanf("%d",&s[i].ticketno);
    printf("\n1.First Class\n2.Second Class \n");
    printf("Enter the option:");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    if(s[i].ticketno<=first)
    {
    printf("Seat Available\n");
    first-=s[i].ticketno;
    }
    else
    {
    printf("Seat not Available");
    }
    break;
    case 2:
    if(s[i].ticketno<=second)
    {
    printf("Seat Available\n");
    second-=s[i].ticketno;
    }
    else
    {
    printf("Seat not Available");
    }
    break;
    default:
    break;
    }
    i++;
}
void availability()
{
    int c;
    printf("Availability Checking");
    printf("\n1.First Class\n2.Second Class\n");
    printf("Enter the option:");
    scanf("%d",&c);
    switch(c)
    {
    case 1: if(first>0)
    {
    printf("Seat Available\n");
    }
    else
    {
    printf("Seat not Available");
    }
    break;
    case 2: if(second>0)
    {
    printf("Seat Available\n");
    }
    else
    {
    printf("Seat not Available");
    }
    break;
    default:
    break;
    }
}

void cancel()
{
    int c;
    printf("Cancelation\n");
    printf("Which class you want to cancel");
    printf("\n1.First Class\n2.Second Class\n");
    printf("Enter the Option:");
    scanf("%d",&c);
    switch(c){
    case 1:
    first++;
    break;
    case 2:
    second++;
    break;
    default:
    break;
    }
    printf("Ticket is Canceled");
}
void chart()
{
    int c;
    for(c=0;c<i;c++)
    {
    printf("\n Number of Ticket:: %d\t Name:%s",s[c].ticketno,s[c].name);
    }
}

int main()
{
    int n;
    printf("Welcome to Railway Ticket Reservation\n");
    while(1) {
    printf("\n1.Booking\n2.Availability Cheking\n3.Cancelation \n4.Chart \n5.Exit\n Enter your Option:");
    scanf("%d",&n);
    switch(n)
    {
    case 1: booking();
    break;
    case 2: availability();
    break;
    case 3: cancel();
    break;
    case 4: chart();
    break;
    case 5:
    printf("\n Thank you visit again!");
    exit(0);
    break;
    default:
    break;
    }
    } 
    return 0;
}
