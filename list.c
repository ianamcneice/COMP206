#include <stdio.h>
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
	//debug
	printf("%d", num);
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
		printf("%d %s", curr->value, ", ");
		curr = curr->next;
	}
}

//BOOLEAN delete(int){

//}

//struct NODE *find(int){

//}

int main(void){
   return 0;
}
