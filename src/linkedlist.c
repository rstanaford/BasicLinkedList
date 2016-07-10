/*
 *
 * Implementation of the main routines for handling list operations.
 *
 */

#include <stdlib.h>
#include "../inc/linkedlist.h"

Node * InitList() {
    
    Node *temp;
	
	temp = malloc(sizeof(Node));
	temp->next = NULL;
	
	return (temp);
}


void BuildList(Node *Head) {

    int i, numNodes;
    Node *newnode;

    printf("How many nodes should be in the list? ");
    scanf("%d", &numNodes);

    for (i=1; i<=numNodes; i++) {
        newnode = (Node *)malloc(sizeof(Node));
        newnode->i = i;
        AddNode(Head, newnode);
    }
}


void PrintList(Node *Head) {

    Node *p_ptr;

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


void AddNode(Node *Head, Node *newnode) {

    Node *p_ptr;

	p_ptr = Head;
	while (p_ptr->next != NULL) {
		p_ptr = p_ptr->next;
	}

	p_ptr->next = newnode;
	newnode->next = NULL;
}


void DeleteList(Node *Head) {

	Node *p_ptr;

	p_ptr = Head;

	while (p_ptr->next != NULL) {
		p_ptr = p_ptr->next;
		Head->next = p_ptr->next;
		free(p_ptr);
		p_ptr = Head;
	}

	free(p_ptr);
}

