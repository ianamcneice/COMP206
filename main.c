#include <stdio.h>
#include "list.h"

int main(void){
	
	//declare char array to hold user input and boolean for while loop
	char f_name[100];
	BOOLEAN exists = FALSE;
	FILE *fptr;

	while(!exists){

		printf("Please enter a filename or path: "); 
		fptr = fgets(f_name, 100, stdin);
	
		//check if file exists and open;
		if(fptr = fopen(f_name, "r")){
			exists = TRUE;
			//debugging
			printf("File exists");
		}
		else
			printf("FILE OR PATH INVALID. ");
	}
	

	fclose(fptr);
}
