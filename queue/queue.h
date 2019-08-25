#include <stdlib.h>
#include <stdio.h>

#ifndef QUEUE
#define QUEUE

#define True 1
#define False 0

typedef int Type;

typedef struct node {
  Type data;
  struct node *next;  
} Node_line;

typedef struct queue {
    Node_line *begin;
    Node_line *end;
} Queue;


Type lnPop(Queue *p);
void lnPush(Queue *p, int x);
void lnPrint(Queue *p);
int lnIsEmpty(Queue *p);
void lnDestroy(Queue *p);
Queue *lnCreate();
Node_line *CreateNode(int x);

#endif //QUEUE