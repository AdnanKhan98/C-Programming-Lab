#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float a,b,c,r1,r2,d;
    printf("Enter Coefficients\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("Inavalid Coefficients\n");
    }
    else
    {
        d=(b*b)-(4*a*c);
        if(d>0)
        {
            printf("Roots are Real and Distinct\n");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("\nr1:%f",r1);
            printf("\nr2:%f",r2);
        }
        else if(d<0)
        {
            printf("Roots are Distinct and Imaginary\n");
            r1=-b/(2*a);
            r2=sqrt(fabs(d))/(2*a);
            printf("\nr1=%f+i%f",r1,r2);
            printf("\nr2=%f-i%f",r1,r2);
        }
        else
        {
            printf("Roots are Real and Equal\n");
            r1=r2=-b/(2*a);
            printf("\nr1=r2=%f",r1);
        }
    }
    getch();

}