#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//LL
struct node{
	int value;
	struct node *next;
};

typedef struct node NODE;

NODE *head, *tail, *temp;

//functions
void add(int num){
	temp = (NODE *)malloc(sizeof(NODE));
	temp->value = num;
	if(tail == NULL)
		tail = temp;
	else{
		tail->next = temp;
		tail = temp;
	}
	tail->next = NULL;
	if(head == NULL)
		head = temp;
}

void prettyPrint(){
	NODE *curr;
	curr = head;
	while(curr !=NULL){
		printf("%d %s", curr->value, "\n");
		curr = curr->next;
	}
}

struct NODE *find(int comp){
	NODE *parser;
	parser = head;
	while(parser != NULL){
		if(parser->value == comp)
			return parser; //mathing int found in LL
		parser = parser->next;
	}
	
	//no matching int
	return NULL;
}

BOOLEAN delete(int i){
	NODE *todel = find(i);

	//if number to delete is head, can simply free head
	if(todel == head){
		head = head->next;
		free(todel);
		return TRUE;
	}
	
	NODE *prev = head; 
	NODE *curr = head->next;
		
	//find prev node to node to be deleted
	while(curr != todel){
		prev = prev->next;
		curr = curr->next;
	}
	
	if(todel == NULL)
		return FALSE;
	else{
		prev->next = todel->next;
		free(todel);
		return TRUE;
	}
}



