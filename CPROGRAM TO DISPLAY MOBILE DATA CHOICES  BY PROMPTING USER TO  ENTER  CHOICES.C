/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Mobile data bundle offer
*/

#include <stdio.h>
int main()
{
	int choice;
	printf(" Data bundle choices:\n");
	printf("1.100MB @ 50KES\n");
	printf("2.500MB @ 200KES\n");
	printf("3.1GB @ 350KES\n");
	printf("4.2GB @ 600KES\n");
	printf("Enter your choice(1-4):\n");
	
	scanf("%d",&choice);
	
     switch(choice){
	  case 1:
	  printf("you have chosen 100MB @  50KES\n");
	  break;
      
      case 2:
      printf("you have  chosen 500MB  @ 200KES\n");
      break;
  
      case 3:
      printf("You have  chosen  1GB @  350KES\n");
      break;
  
      case 4:
      printf("You have  chosen  2GB  @   600KES\n");
      break;
  
      default:
  	  printf("Invalid choice\n");
  }
	return 0;
}