/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:File handling on sales and transaction report
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*file;
	float transaction,totalsales=0;
	file=fopen("sales.txt","r");
	if(file==NULL){
		printf("Error opening sales.txt! File maynot exist.\n");
		return 1;
	}
	while(fscanf(file,"%f",&transaction)!=EOF){
		totalsales+=transaction;
	}
	fclose(file);
	printf("...Daily sales Report...\n");;
	printf("Totalsales for the day:KES%.2f\n",totalsales);
	
	return 0;
}