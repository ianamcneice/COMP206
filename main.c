#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void){
	
	//declare char array to hold user input and boolean for while loop
	char fname[100];
	BOOLEAN exists = FALSE;
	FILE *fptr;

	while(!exists){

		printf("Please enter a filename or path: \n"); 
		scanf("%s", &fname);
	
		//check if file exists and open; reiterate until user inputs valid file
		fptr = fopen(fname, "r");
		if(fptr != NULL){
			exists = TRUE;
		}
		else
			printf("FILE OR PATH INVALID. \n");
	}
	
	//add each number in txt file to LL
	int newNum;
	while(fscanf(fptr, "%d", &newNum) == 1){
		add(newNum);
	}
	//hit end of file
	if(feof(fptr)){}
	//some other error
	else
		printf("Read interrupted.\n");
	fclose(fptr);
	
	prettyPrint();

	//ask user to delete number
	int run = 0;
	while(run == 0){
		int del;
		printf("Please enter a number to delete: ");
		scanf("%d", &del);
	
		//delete from LL
		if(delete(del))
			printf("NUMBER WAS DELETED\n");
		else
			printf("NUMBER WAS NOT FOUND\n");

		prettyPrint();

		//asks user if they would like to do this again
		char yn[3];
			printf("Would you like to delete another number? \n");
			scanf("%s", yn);
			//compares user response to possible affirmative responses, continues run while loop
			if(!(strcmp(yn, "YES") == 0 || strcmp(yn, "Y") == 0 || strcmp(yn, "y") == 0 || strcmp(yn, "yes") == 0)) 
				run=1;
	}
}
