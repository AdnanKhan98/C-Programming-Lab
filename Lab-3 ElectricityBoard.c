#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(void)
{
	system("cls");
	char Name[30];
	int Units;
	
	const int MinCharge = 100;
	const double unit1 = 0.8;
	const double unit2 = 0.9;
	const double unit3 = 1.0;
	const double Surcharge = 0.15;
	double BillAmount = 0.0;

	printf("\nEnter the name of the Customer:");
	scanf("%s",Name);
	printf("\nEnter the number of units consumed:");
	scanf("%d",&Units);

	BillAmount += MinCharge;

	if(Units <= 200)
	{
		BillAmount += Units*unit1;
	}
	else if(Units > 200 && Units <=300)
	{
		BillAmount += (200*unit1)+((Units-200)*unit2);
	}
	else 
	{
		BillAmount += (200*unit1)+(100*unit2)+((Units-300*unit3));
	}
	if (BillAmount > 400)
	{
		BillAmount += BillAmount * Surcharge;
	}

	printf("\nElectricity Bill\n*****************************************");
	printf("\nCustomer Name\t: %s" , Name);
	printf("\nUnits Consumed\t: %d", Units);
	printf("\nBill Amount\t: %0.2lf Rupees\n\n", BillAmount);
	return 0;

}