#include<stdio.h>
#include<string.h>
struct student
{
    int rnumber;
    char name[20];
    int marks;
    char grade;
} stud[60];

void main()
{
    int i,n;
    float sum=0,avg=0;
    char a;
    printf("Enter the number of Students");
    scanf("%d",&n);
    printf("\n Enter the roll number, Name, Marks and Grade of Student\n");
    
    for(i=1;i<=n;i++)
    {
        printf("\n Student %d details\n",i);
        scanf("%d", &stud[i].rnumber);
        scanf("%s",&stud[i].name);
        scanf("%d",&stud[i].marks);
        scanf("%c",&stud[i].grade);
        //fflush(stdin);
        stud[i].grade=getchar();
        sum+=stud[i].marks;
    }
    avg=sum/n;
    printf("\n Avg marks is %f",avg);
    printf("\n Student Details are:");
    printf("\n Roll_Number\t Name\t Marks\t Grade");
    for(i=1;i<=n;i++)
    printf("\n %d \t  %s \t %d \t %c \t",stud[i].rnumber, stud[i].name, stud[i].marks, stud[i].grade);
    printf("\n Details of students who score above average marks \n");
    printf("\n Roll Nmber \t Name \t Marks \t Grade \n");
    for(i=1;i<=n;i++)
    {
        if(stud[i].marks>=avg)
        {
            printf("\n %d \t \t %s \t %d \t %c \t",stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
        }
    }
    printf("\n Details of students who scored below average Marks \n");
    printf("\n Roll_Number \t Name \t Marks \t Grade \n");
    for(i=1;i<=n;i++)
    {
        if(stud[i].marks<avg)
        {
            printf("\n %d \t \t %s \t %d \t %s \t",stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
        }
    } 
    getchar();
    
}


























