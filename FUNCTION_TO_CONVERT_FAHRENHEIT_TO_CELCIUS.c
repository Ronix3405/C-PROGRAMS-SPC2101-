/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:A function to convert Fahrenheit to celcius
*/

#include <stdio.h>

float convertTocelcius(float fahrenheit){
	return (fahrenheit-32)*5/9;
}
int main()
{
	float f;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&f);
	printf("Temperature in Celcius:%.2f`C\n",convertTocelcius(f));
	return 0;
}