/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:3D Array Multiple Branches
*/
#include <stdio.h>
#include<stdlib.h>
 int main()
 {
	 int chain[3] [5] [10];
	 int branch,floor,room;
	 int totaloccupied=0;
 for(branch=0;branch<3;branch++){
 	for(floor=0;floor<5;floor++){
 		for(room=0;room<10;room++){
 			chain[branch] [floor] [room] =rand() %2;
 			if(chain[branch][floor][room]==1)
 				totaloccupied++;
		 }
	 }
 }
 printf("\nTotal occupied Rooms Across All branches:%d\n",totaloccupied);
	 return 0;
 }