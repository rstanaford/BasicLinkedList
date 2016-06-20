/* Linkedlist.h: Interface for Linked List handling. */



#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#endif

#include <stdio.h>


struct Node {
    int i;
    struct Node *next;
};


/* Initialize the list. */
struct Node * InitList();

/* Print the contents of the current list. */
void PrintList(struct Node *Head);

/* Add a node to the end of the list. */
void AddNode(struct Node *Head, int num);

/* Insert a node at a specified position within the list. */
void InsertNode(struct Node *Head, int num, int pos);

/* Remove a node from the list. */
void DeleteNode(struct Node *Head, int pos);

/* Delete the entire list */
void DeleteList(struct Node *Head);
