/* 
 *
 * Main program for basic linked list handling.
 *
 */


#include <stdio.h>
#include "../inc/linkedlist.h"



int main() {

	struct Node *Head;
	int i;

	Head = InitList();
	PrintList(Head);	/* Print the initial list */

	/* Build a basic five element list */
	for (i=1 ; i<501 ; i++) {
		AddNode(Head, i);
	}

	PrintList(Head);	/* Print the list again */
	DeleteList(Head);

    return 0;
}
