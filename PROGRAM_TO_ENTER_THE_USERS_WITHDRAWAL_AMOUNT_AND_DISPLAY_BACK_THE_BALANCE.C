/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Program to displaying the balance through the users withdrawal amount
*/

#include <stdio.h>
int main(){
    double balance;
	    printf("Enter the starting account balance (KES): ");
    if (scanf("%lf",&balance) !=1)return 1;
    
    while(balance>0.0){
		double withdraw;
		printf("Enter amount to withdraw:");
		if(scanf("%lf",&withdraw)!=1) break;
		balance -= withdraw;
		printf("Remaining balance:%.2f KES\n",balance);
		if(balance<=0.0){
			printf("Balance is zero or negative. Exiting.\n");
			break;
		}
 	}
 	return 0;
 }
 