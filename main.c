#include <stdio.h>
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
	int toAdd;
	while(fscanf(fptr, "%d", &toAdd) == 1){
		//debugging - this print will be add(int) function
		printf("%d", toAdd);

	}
	
	//hit end of file
	//debugging printf
	if(feof(fptr))
		printf(" end of file (LL)\n");
	//some error
	else
		printf("Read interrupted.\n");
	fclose(fptr);
}
