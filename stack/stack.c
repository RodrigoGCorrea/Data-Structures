#include "stack.h"

Node_stack *CreateNode(Type x){
    Node_stack *aux = (Node_stack*) malloc(sizeof(Node_stack));
    aux->data = x;
    aux->next = NULL;
    return aux;
}

Stack *stCreate(){
    Stack *temp = (Stack*) malloc(sizeof(Stack));
    temp->begin = NULL;
    return temp;
}

int stIsEmpty(Stack *p){
    if (p->begin == NULL){
        return True;
    }
    return False;
}

void stPush(Stack *p, int x){
    Node_stack *aux = CreateNode(x);
    if (stIsEmpty(p) == True){
        aux->next = NULL;
    } else {
        aux->next = p->begin;
    }
    p->begin = aux;
}

Type stPop(Stack *p){
    if (stIsEmpty(p) == False){
        Type aux;
        Node_stack *temp = p->begin;
        aux = temp->data;
        p->begin = p->begin->next;
        free(temp);
        return aux;
    }
    return False;
}

void stPrint(Stack *p){
    Node_stack *aux = p->begin;
    while (aux != NULL){
        if (aux->next != NULL){
            printf("[%i]->", aux->data);
        } else {
            printf("[%i]->NULL\n", aux->data);
        }
        aux = aux->next;
    }
}

void stDestroy(Stack *p){
    if (p->begin != NULL){
        stPop(p);
        stDestroy(p);
    }
}










