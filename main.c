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
}
