#include "stack.h"

int main(){
    Stack *pilha = stCreate();
    Type data;
    stPush(pilha, 1);
    stPush(pilha, 2);
    stPrint(pilha);
    data = stPop(pilha);
    printf("%i\n", data);
    stPrint(pilha);
    // data = stPop(pilha);
    // printf("%i\n", data);
    stDestroy(pilha);
    stPrint(pilha);
    return 0;
}