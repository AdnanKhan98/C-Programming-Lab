#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int N);
void main()
{
    int FACT,NUM;
    system("cls");
    printf("Enter Number:");
    scanf("%d",&NUM);
    if(NUM>0)
    {
        FACT=factorial(NUM);
        printf("\nFactorial of %d=%d",NUM,FACT);
    }
    else
    {
        printf("\nERROR:Given Number is %d NEGATIVE",NUM);
    }
    getch();
}
int factorial(int N)
{
    int RESULT;
    if(N==1)
    return(1);
    else
    RESULT=N*factorial(N-1);
    return(RESULT);     
}
