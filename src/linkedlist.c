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


/******************************************************************************
 * Algorithm for deleting the entire list follows an "in order" process.
 *
 * 1. Create a tracking pointer and point it to the Head.
 *
 * 2. If Head->next does not point to NULL, shift the tracking pointer to the
 * next node in the list.
 *
 * 3. Reassign Head->next to point to the next node the tracking pointer points
 * to, effectively "leap frogging" over what Head->next formerly pointed to.
 *
 * 4. The tracking pointer will be left pointing to a lone, now isolated node,
 * which is then Freed.
 *
 * 5. Tracking pointer points back to Head and the process repeats.
 ******************************************************************************/

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

