/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:program to calculate volume and surface area by prompting the user to enter the radius and height
*/

#include <stdio.h>
#define PI 3.14 //Take this constant for pie
  int main()
  
  {
	  double height,radius;
	  double volume,surfaceArea;
	  
	  //prompt the user to  enter the radius and height
printf("Enter the radius:");
scanf("%lf",&radius);

printf("Enter the height:");
scanf("%lf",&height);
//Find the volume
volume = PI * radius * radius * height;

//Find the surfaceArea
surfaceArea = 2 * PI * radius *	radius  + 2 *PI * radius * height; 

	 //Give results
	 printf("\nThese are the result:\n");
	 printf(" volume of the cylinder = %lf\n",volume);
	 printf("SurfaceArea of the cylinder = %lf\n",surfaceArea); 
	   
	  return 0;  
  }