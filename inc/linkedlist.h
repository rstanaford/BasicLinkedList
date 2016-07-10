/* Linkedlist.h: Interface for Linked List handling. */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#endif

#include <stdio.h>

/* Todo: Redesign algorithm to separate the data type from the implementation. */

typedef struct Node {
    int i;
    struct Node *next;
} Node;


/* Initialize the list. */
Node * InitList();

/* Ask user for number of nodes and then build the list. */
void BuildList(Node *Head);

/* Print the contents of the current list. */
void PrintList(Node *Head);

/* Add a node to the end of the list. */
void AddNode(Node *Head, Node *node);

/* Insert a node at a specified position within the list. */
void InsertNode(Node *Head, int num, int pos);

/* Remove a node from the list. */
void DeleteNode(Node *Head, int pos);

/* Delete the entire list */
void DeleteList(Node *Head);
