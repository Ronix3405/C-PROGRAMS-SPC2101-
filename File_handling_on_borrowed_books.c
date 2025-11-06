/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:File handling on borrowed books
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char bookTitle[100];
	FILE*file;
	file=fopen("borrowed_books.txt","a");
	if(file==NULL){
    printf("Error opening file!\n");
    return 1;
	}
printf("Enter book title:  ");
fgets(bookTitle,sizeof(bookTitle),stdin);
bookTitle[strcspn(bookTitle,"\n")]=0;
fprintf(file,"%s\n",bookTitle);
fclose(file);
printf("Booktitle'%s' successfully stored in borrowed_books.txt\n",bookTitle);
	return 0;
}
