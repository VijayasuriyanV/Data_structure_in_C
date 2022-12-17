//REAL TIME APPLICATIONS- BANKING APPLICATION
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define MINBAL 500

struct Bank_Account
{
    char no[10];
    char name[20];
    char balance[15];
}acc;

int main()
{

    long int pos1,pos2,pos; 
    FILE *fp;
    char *ano,*amt;
    char choice; int
    type,flag=0;
    float bal;
    do
    {

    fflush(stdin); //to clear the output buffer 
    printf("1. Add a New Account Holder\n");
    printf("2. Display\n");
    printf("3. Deposit or Withdraw\n");
    printf("4. Number of Account Holder Whose Balance is less than the Minimum Balance\n");
    printf("5. Delete All\n");
    printf("6. Stop\n");
    printf("Enter your choice :"); 
    scanf("%s",&choice);
    switch(choice)
    {
    case '1' : 
    fflush(stdin);
    fp=fopen("acc.dat","a");
    printf("\nEnter the Account Number :");
    scanf("%s",&acc.no);
    printf("\nEnter the Account Holder Name :");
    scanf("%s",&acc.name);
    printf("\nEnter the Initial Amount to deposit :"); 
    scanf("%s",&acc.balance);
    fseek(fp,0,2);//set the position to desire point
    fwrite(&acc,sizeof(acc),1,fp);
    fclose(fp);
    break;
    case '2':
    fp=fopen("acc.dat","r");
    if(fp==NULL)
    printf("\nFile is Empty");
    else
    {
    printf("\nA/c Number\tA/c Holder Name Balance\n");
    while(fread(&acc,sizeof(acc),1,fp)==1)  //fread used to read data from a file and store it in a buffer.
    printf("%-10s\t\t%- 20s\t%s\n",acc.no,acc.name,acc.balance);
    fclose(fp);
    }
    break;
    case '3' :
    fflush(stdin); 
    flag=0;
    fp=fopen("acc.dat","r+");
    printf("\nEnter the Account Number : ");
    scanf("%s",&ano);
    for(pos1=ftell(fp);fread(&acc,sizeof(acc),1,fp)==1; pos1=ftell(fp))
    {
    if(strcmp(acc.no,ano)==0)
    {
    printf("\nEnter the Type 1 for deposit & 2 for withdraw : ");
    scanf("%d",&type);
    printf("\nYour Current Balance is : %s",acc.balance);
    printf("\nEnter the Amount to transact : ");
    fflush(stdin);
    scanf("%s",&amt);
    if(type==1)
    bal = atof(acc.balance) + atof(amt);  //atof -> ASCII to float
    else
    {
    bal = atof(acc.balance) - atof(amt);
    if(bal<0)
    {
    printf("\nRs.%s Not available in your A/c\n",amt);
    flag=2;
    break;
    }
    }
    flag++;
    break;
    }
    }
    if(flag==1)
    {
    pos2=ftell(fp);
    pos = pos2-pos1;
    fseek(fp,-pos,1);
    sprintf(amt,"%.2f",bal);
    strcpy(acc.balance,amt);
    fwrite(&acc,sizeof(acc),1,fp);
    }
    else if(flag==0)
    printf("\nA/c Number Not exits... Check it again");
    fclose(fp);
    break;
    case '4' :
    fp=fopen("acc.dat","r");
    flag=0;
    while(fread(&acc,sizeof(acc),1,fp)==1)
    {
    bal = atof(acc.balance);
    if(bal<MINBAL)
    flag++;
    }
    printf("\nThe Number of Account Holder whose Balance less than the Minimum Balance : %d",flag);
    fclose(fp);
    break;
    case '5' :
    remove("acc.dat");
    break;
    case '6' :
    fclose(fp);
    exit(0);
    }
    printf("\n...\n\n");
    
    }
    while (choice!='6');
    
}
