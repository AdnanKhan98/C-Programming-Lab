#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,result;
    char op;
    printf("Enter Arithmetic Operation:\n");
    scanf("%d%c%d",&n1,&op,&n2);
    switch(op)
    {
        case'+':result=n1+n2;
                printf("\nResult:%d",result);
                break;
        case'-':result=n1-n2;
                printf("\nResult:%d",result);
                break;
        case'*':result=n1*n2;
                printf("\nResult:%d",result);
                break;
        case'/':if(n2!=0)
                {
                    float result1=(float)n1/n2;
                    printf("\nResult:%3f",result1);
                    break;
                }
                else
                {
                    printf("\nDivide Error");
                    break;
                }
        case'%':result=n1%n2;
                printf("\nResult:%d",result);
                break;
        default:printf("\nInvalid Operator");
                break;
    }
}