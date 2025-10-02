/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Program to check for Exam Eligibility
*/

#include <stdio.h>

int main()
{
	float attendance;
	float marks;
	printf("Enter percentage of attendance:");
	scanf("%f",&attendance);
	
	printf("Enter the average marks :");
	scanf("%f",&marks);
if(attendance>=75&&marks>=40){
	printf("\nEligible for final exams\n");
}else{
	printf("\nNot eligible\n");	
}	
	return 0;
}
