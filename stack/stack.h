#include <stdio.h>
#include <stdlib.h>

#ifndef STACK
#define STACK

#define True 1
#define False 0

typedef int Type;

typedef struct node {
    Type data;
    struct node *next;
} Node_stack;

typedef struct stack {
    Node_stack *begin;
} Stack;

Node_stack *CreateNode(Type x);
Stack *stCreate();
int stIsEmpty(Stack *p);
void stPush(Stack *p, int x);
Type stPop(Stack *p);
void stPrint(Stack *p);
void stDestroy(Stack *p);

#endif // STACK