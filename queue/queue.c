#include "queue.h"

Node_line *CreateNode(Type x){
    Node_line *aux = (Node_line*) malloc(sizeof(Node_line));
    aux->data = x;
    aux->next = NULL;
    return aux;
}


Queue *lnCreate(){
    Queue *temp = (Queue*) malloc(sizeof(Queue));
    temp->begin = NULL;
    temp->end = NULL;
    return temp;
}

void lnDestroy(Queue *p){
    Type aux;
    if (p->begin != NULL){
        aux = lnPop(p);
        lnDestroy(p);
    }
}

int lnIsEmpty(Queue *p){
    if (p->begin == NULL && p->end == NULL){
        return True;
    } return False;
}

void lnPrint(Queue *p){
    Node_line *temp1 = p->begin;
    while (temp1 != NULL) {
        if (temp1->next == NULL){
            printf("[%i]->NULL\n", temp1->data);
        } else {
            printf("[%i]->", temp1->data);
        }
        temp1 = temp1->next;  
    }
}

void lnPush(Queue *p, int x){
    Node_line *temp = CreateNode(x);
    if (lnIsEmpty(p) == True){
        p->begin = temp;
    } else {
        p->end->next = temp;
    }
    p->end = temp;
}

Type lnPop(Queue *p){
    if (lnIsEmpty(p) == False){
        Node_line *aux = p->begin;
        Type x = aux->data;
        p->begin = aux->next;
        if (p->begin == NULL)
            p->end = NULL;
        free(aux);
        return x;
    }
    return -1;
}
















