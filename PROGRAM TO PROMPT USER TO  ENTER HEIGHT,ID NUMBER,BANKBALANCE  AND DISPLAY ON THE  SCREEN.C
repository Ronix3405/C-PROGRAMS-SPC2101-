/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:The program to prompt user to enter and display height,ID number,bank balance
*/

#include <stdio.h>
int main()
{
	float height;
	int IDnumber;
    double bankbalance;
    
//prompt and display these commands
printf("Enter your height:");
scanf("%f",& height);

printf("Enter your IDnumber:");
scanf("%d",&IDnumber);

printf("Enter your bankbalance:");
scanf("%if",&bankbalance);

//Display back these informations to the user
printf("Your height:%.2f\n",height);
printf("Your IDnumber:%d\n",IDnumber);
printf("Your bankbalance:kshs%if\n",bankbalance);

return 0;   

}