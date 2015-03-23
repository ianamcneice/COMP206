#include <stdio.h>
#include "list.h"

int main(void){
	
	//declare char array to hold user input and boolean for while loop
	char fname[100];
	BOOLEAN exists = FALSE;
	FILE *fptr;

	while(!exists){

		printf("Please enter a filename or path: "); 
		scanf("%s", &fname);
	
		//check if file exists and open;
		fptr = fopen(fname, "r");
		if(fptr != NULL){
			exists = TRUE;
			//debugging
			printf("File exists");
		}
		else
			printf("FILE OR PATH INVALID. ");
	}
	
	printf("while loop exited successfully");
	fclose(fptr);
}
