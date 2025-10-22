/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:A function to calculateFare
*/
#include <stdio.h>
float calculateFare(float distance){
	return distance * 50;
}
int main()
{
	float distance;
	printf("Enter distance travelled(km):");
	scanf("%f",&distance);
	printf("Total Fare = %.2f ksh\n",calculateFare(distance));
	return 0;
}