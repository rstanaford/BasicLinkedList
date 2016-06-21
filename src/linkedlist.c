/*
 *
 * Implementation of the main routines for handling list operations.
 *
 */

#include <stdlib.h>
#include "../inc/linkedlist.h"

struct Node * InitList() {
	
	struct Node *temp;
	
	temp = malloc(sizeof(struct Node));
	temp->next = NULL;
	
	return (temp);
}


void PrintList(struct Node *Head) {

    struct Node *p_ptr;

	if (Head->next != NULL) {
    	p_ptr = Head->next;

    	while (p_ptr != NULL) {
	    	printf("%d ", p_ptr->i);
	    	p_ptr = p_ptr->next;
		}
		printf("\n\nPress any key to continue...\n\n");
		getchar();
	}
	
	else {
		printf("\nList is empty...\n");
		printf("Press any key to continue...\n\n");
		getchar();
	}
}


void AddNode(struct Node *Head, int num) {

    struct Node *p_ptr;
    struct Node *newnode;

	p_ptr = Head;
	while (p_ptr->next != NULL) {
		p_ptr = p_ptr->next;
	}

	newnode = (struct Node *)malloc(sizeof(struct Node));
	p_ptr->next = newnode;
  newnode->i = num;
	newnode->next = NULL;
}


void DeleteList(struct Node *Head) {

	struct Node *p_ptr;

	p_ptr = Head;

	while (p_ptr->next != NULL) {
		p_ptr = p_ptr->next;
		Head->next = p_ptr->next;
		free(p_ptr);
		p_ptr = Head;
	}

	free(p_ptr);
}

