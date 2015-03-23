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
	fscanf(fptr, "%d", &toAdd);
	//debugging
	printf("%d", toAdd);

	fclose(fptr);
}
