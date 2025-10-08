/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Program to prompt the user to enter the password until the correct one is entered
*/

#include <stdio.h>
#include<string.h>

int main()
{
	char password[12];
	do{
		printf("Enter the password: ");
		if(scanf("%33s",password) !=1)return 1;
	}
while(strcmp(password,"1234") !=0);

  printf("Access Granted\n");
	return 0;
}
