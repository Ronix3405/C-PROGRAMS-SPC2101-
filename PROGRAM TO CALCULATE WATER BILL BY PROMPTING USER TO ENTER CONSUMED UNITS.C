/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Program to calculate water bill
*/

#include <stdio.h>
 int main()
 {
	 int units;
	 double bill = 0;
	 
printf("Enter Amount of water units consumed: ");
  scanf("%d",&units);
  
  if(units<=30){
	  bill = units*20;
  }	else if(units<=60){
  	bill = units * 25;
  	bill = ( 30 * 20 ) + (( units - 30 ) * 25 );
  }
  else {
  	if(units>60);
  	bill = units*30;
	bill = (30*20) + (30*25) + ((units-60)* 30 );
  }
  printf("Total water bill:%.2fKES\n",bill);
	 return 0;
 }

