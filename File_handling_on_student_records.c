/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:File on student records
*/
#include<stdio.h>
#include<stdlib.h>
struct  student
{
	char name[50];
	char registrationNumber[20];
	float totalMarks;
};
int main()
{
	FILE*file;
	struct student student;
	file=fopen("result.dot","rb");
	if(file==NULL){
		printf("Error opening file!File maynot exist.\n");
		return 1;
	}
	printf("...student Examination Result...\n");
	while(fread(&student,sizeof(struct student),1,file)){
		printf("Name:%s\n",student.name);
		printf("Registration:%s\n",student.registrationNumber);
		printf("TotalMarks:%.2f\n\n",student.totalMarks);
	}
	fclose(file);
	return 0;
}
