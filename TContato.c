#include "TContato.h"
#include <stdio.h>

typedef struct _no{
    TContato info;
    struct _no *prox;
}TNo;


TNo* TNo_createNFill(TContato info){

    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}


