#include "queue.h"

int main(){
    Queue *fila1;
    Type variable;
    fila1 = lnCreate();
    // lnPush(fila1, 1);
    // lnPush(fila1, 3);
    // lnPush(fila1, 4);
    lnPrint(fila1);
    variable = lnPop(fila1);
    printf("%i\n", variable);
    lnPrint(fila1);
    lnDestroy(fila1);
    return 0;
}