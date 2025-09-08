#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *previous;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;

List* createList ( void );
Node* createNode ( int );
void addNode ( List*, int );
void forwardPrint ( List* );
void backwardPrint ( List* );
void insertHead ( List*, int );
void insertMiddle ( List*, int, int );
void insertTail ( List*, int );
void searchNode ( List*, int );
int count ( List* );
void mergeList ( List*, List* );
void sortList ( List* );
void deleteNode ( List*, int );
void freeNode ( List* );
