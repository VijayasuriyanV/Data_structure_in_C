#include<stdio.h>
#include<string.h> 
#include<stdlib.h>

struct person
{
    char name[20]; 
    long telno;
};

void appendData()
{
    FILE *fp;
    struct person obj; 
    fp=fopen("data.txt","a");
    printf("\n*****Add Record****\n");
    printf("Enter Name : "); 
    scanf("%s",obj.name); 
    printf("\nEnter Telephone No. : ");
    scanf("%ld",&obj.telno);
    fprintf(fp,"%20s %10ld",obj.name,obj.telno); 
    fclose(fp);
}
void showAllData()
{
    FILE *fp;
    struct person obj;
    fp=fopen("data.txt","r");
    printf("*****Display All Records*****\n"); 
    printf("\n\n\t\tName\t\t\tTelephone No.");
    printf("\n\t\t=====\t\t\t==========\n\n"); 
    while(!feof(fp))
    {
    fscanf(fp,"%20s %7ld",obj.name,&obj.telno); 
    printf("%20s %7ld\n",obj.name,obj.telno);
    }
    fclose(fp);
}
void findData()
{
    FILE *fp;
    struct person obj;
    char name[20]; 
    int total=0; 
    fp=fopen("data.txt","r");
    printf("\n*****Display SpecificRecords*****\n");
    printf("\nEnter Name : ");
    scanf("%s",&name);
    while(!feof(fp))
    {
    fscanf(fp,"%20s %7ld",obj.name,&obj.telno);
    if(strcmpi(obj.name,name)==0)
    { printf("\n\nName : %s",obj.name);
    printf("\nTelephone No : %ld",obj.telno);
    total++;
    }
    }
    if(total==0)
    printf("\n\n\nNo Data Found");
    else
    printf("\n\n===Total %d Record found===",total);
    fclose(fp);

}
int main() 
{
        
    char choice;
    while(1){
    printf("*****TELEPHONE DIRECTORY *****\n\n");
    printf("1) Append Record\n");
    printf("2) Find Record\n");
    printf("3) Read all record\n");
    printf("4) exit\n");
    printf("Enter your choice :"); 
    scanf("%s",&choice);
    switch(choice)
    {
    case'1' : //call append record
    appendData(); break;
    case'2' : //call find record
    findData(); break;
    case'3' : //Read all record
    showAllData(); break;
    case '4':
    exit(0);
    }
        }
}
