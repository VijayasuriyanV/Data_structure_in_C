//REAL TIME APPLICATIONS- Internal Marks
#include<stdio.h>
#include<string.h>

struct mark_sheet{
    char name[20];
    long int rollno; 
    int marks[10];
    int total;
    float average; 
    char res[10]; 
    char cl[20];
    } stu[100]; 
int main()
{
    int i,j,n,flag=1;
    char ch;     
    printf("How many students : \n"); 
    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
    printf("\n\nEnter the details of %d students : ", i); 
    printf("\n\nEnter student %d Name : ", i); 
    scanf("%s", stu[i].name);
    printf("\n\nEnter student %d Roll Number : ", i);
    scanf("%ld", &stu[i].rollno);
    stu[i].total=0;

    for(j=1;j<=5;++j) 
    {
    printf("\n\nEnter the mark of subject-%d : ", j);
    scanf("%d", &stu[i].marks[j]);
    stu[i].total += stu[i].marks[j];
    if(stu[i].marks[j]<40)
    flag=0;
    }

    stu[i].average =(float)(stu[i].total)/5.0;

    if((stu[i].average>=75)) 
    strcpy(stu[i].cl,"Distinction");

    else if((stu[i].average>=60))
    strcpy(stu[i].cl,"First Class");

    else

    if((stu[i].average>=50))
    strcpy(stu[i].cl,"Second Class"); 

    else

    if((stu[i].average>=40)) 
    strcpy(stu[i].cl,"Third Class");

    if(flag==1) 
    strcpy(stu[i].res,"Pass");

    else strcpy(stu[i].res,"Fail"); 
    flag=1;

    }

    for(i=1;i<=n;++i)
    {

    printf("\n\n\t\t\t\tMark Sheet\n");
    printf("\nName of Student:%s",stu[i].name); 
    printf("\t\t\t\t Roll No : %ld", stu[i].rollno);
    printf("\n "); 

    for(j=1;j<=5;j++)

    {
    printf("\n\n\t Subject %d \t\t :\t %d", j, stu[i].marks[j]);
    }
    
    printf("\n\n \n"); 
    printf("\n\n Total Marks : %d", stu[i].total); 
    printf("\t\t\t\t Average Marks : %5.2f", stu[i].average); 
    printf("\n\n Class : %s", stu[i].cl);
    printf("\t\t\t\t\t Status : %s", stu[i].res);
    }
    
    return 0;
}
