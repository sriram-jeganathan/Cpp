#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;

List* createList ( void );
void addNode ( List*, int );
void forwardPrint ( List* );
void printBackward ( Node*, Node* );
void backwardPrint ( List* );
void reverseList ( List* );
void reverse ( Node*, Node* );
int count ( List* );
void searchNode ( List*, int );
void insertHead ( List*, int );
void insertTail ( List*, int );
void insertMiddle ( List*, int, int );
void mergeList ( List*, List* );
void sort ( List* );
void deleteNode ( List*, int );
void freeList ( List* );
