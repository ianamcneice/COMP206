#include <stdio.h>
#include "list.h"

//LL
struct elem{
	int value;
	struct elem *next;
};

typedef struct elem NODE;

NODE *head, *tail;

//functions
void add(int num){
	tail = (NODE *)malloc(sizeof(NODE));
	tail->value = num;
	tail->next = NULL;
	if(head == NULL)
		head = tail;
}

void prettyPrint(){
	NODE *curr;
	curr = head;
	while(curr !=NULL){
		printf("%d %s", curr->value, ", ");
		curr = curr->next;
}

//BOOLEAN delete(int){

//}

//struct NODE *find(int){

//}
