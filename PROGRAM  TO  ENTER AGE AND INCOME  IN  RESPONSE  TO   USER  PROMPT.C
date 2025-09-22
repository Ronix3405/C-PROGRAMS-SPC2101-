/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Program to prompt user to enter age and income for loan offer
*/
#include <stdio.h>
int main()
{
	int age;
	float income;
	
	//prompt user to enter age
	printf("Enter your age:");
	scanf("%d",&age);
	
	//prompt user to enter income
	printf("Enter your income:");
	scanf("%f",&income);
	//check for qualification requirements
	if(age>=21&&income>=21000){
		printf("congratulations you qualify for a loan\n");
	}else
	{
		printf("Unfortunately,we are unable to offer you a loan  at  this  time\n");
		
	}
	return 0;
}

