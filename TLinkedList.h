#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include<stdbool.h>
#include "TContato.h"

typedef struct _list TLinkedList;

/**
 * Cria instâncias da lista simplesmente encadeada.
 * @return TLinkedList* ponteiro para a lista alocada
 * */
TLinkedList* list_create();
/**
 * Inserção no fim da lista. 
 * @param TLinkedList* ponteiro para uma instância da lista
 * @param TContato informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_end(TLinkedList*, TContato);
 /**
 * Tenta deletar um contato 
 * @param TLinkedList* ponteiro para uma instância da lista
 * @param char *nome 
 * @return bool informando o sucesso da operação
 */
bool list_delete(TLinkedList* lista, char* nome);

/**
 * Imprimi os valores que estão na lista
 * @param TLinkedList* ponteiro para uma instância da lista
 */
void list_print(TLinkedList*);

/**
 * Salva os arquivos em formato csv.
 */


/**
 * 
 */

#endif