/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Array for house occupancy
*/
#include<stdio.h>
int main()
{
	int floor,room;
	int occupants[5][10];
	for(floor=0;floor<5;floor++){
		for(room=0;room<10;room++){
printf("Enter occupants for floor %d room%d:",floor+1,room+1);
scanf("%d",&occupants [floor][room]);
		}
	}
for(floor=0;floor<5;floor++){
	printf("Floor%d:\n",floor+1);
	for(room=0;room<10;room++){
printf("Room%d:%d occupants\n",room+1,occupants[floor][room]);
	}
}
	return 0;
}
