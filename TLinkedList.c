#include "TLinkedList.h"
#include "TContato.c"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _no
{
    TContato info;
    struct _no *prox;
} TNo;

TNo *TNo_createNFill(TContato);

struct _list
{

    TNo *inicio;
};

// Cria instâncias da lista simplesmente encadeada.
TLinkedList *list_create()
{
    TLinkedList *nova = malloc(sizeof(TLinkedList));
    if (nova != NULL)
    {
        nova->inicio = NULL;
    }
    return nova;
}

// Inserção no fim da lista.
bool list_insert_end(TLinkedList *lista, TContato info)
{
    if(lista == NULL) return false;
    TNo *novo = TNo_createNFill(info);
    if (novo == NULL)
        return false;

    // A lista está vazia?
    if (lista->inicio == NULL)
        lista->inicio = novo;
    else
    {
        TNo *atual = lista->inicio;
        while (atual->prox != NULL)
            atual = atual->prox;
        atual->prox = novo;
    }
    return true;
}

// Tenta deletar um contato 
bool list_delete(TLinkedList* lista, char* nome){
    if(lista == NULL || lista->inicio == NULL) return false;

    TNo *atual = lista->inicio;
    TNo *anterior = NULL;
    int i = 0;

    // retorna 0 (strings iguais).
    while(atual != NULL && strcmp(atual->info.nome, nome) != 0){ 
        atual = atual->prox;
    }
    // Não encontrou
    if(atual == NULL) return false;

    // Se for o primeiro
    if (anterior == NULL) {
        lista->inicio = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }
    free(atual);
}
//Imprime a agenda
void list_print(TLinkedList *lista)
{
    TNo *atual = lista->inicio;
    while (atual != NULL)
    {
        TContato_print(atual->info);
        atual = atual->prox;
    }
    putchar('\n');
}

// Salva os arquivos em formato csv
void list_print_csv(TLinkedList *lista){
    
    FILE* arquivo = fopen("agenda.csv", "w");
    if(arquivo  ==  NULL){
        puts("Erro ao abrir o arquivo");
        return;
    }

    TNo *atual = lista->inicio;
    
    while(atual != NULL){

        atual = atual->prox;
    }
}

TNo *TNo_createNFill(TContato info)
{
    TNo *novo = malloc(sizeof(TNo));
    if (novo)
    {
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}