/* 
 *
 * Main program for basic linked list handling.
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "../inc/linkedlist.h"



int main() {
    
    Node *Head;
    
    Head = InitList();
    PrintList(Head);	/* Print the initial list */
    
    BuildList(Head);
    
    PrintList(Head);	/* Print the list again */
    DeleteList(Head);
    
    return 0;
}
