#include <stdio.h>
#include "TContato.h"


int menu(){
    int op = 5;

    printf("=-=-=-=-=-=-=-=-=-=-= Agenda de contatos =-=-=-=-=-=-=-=-=-=-=\n");
    printf("1 - Cadastro de novo contato\n");
    printf("2 - Imprimir agenda\n");
    printf("3 - Deletar um contato\n");
    printf("4 - Salvar\n");
    printf("5 - Sair\n");

    printf("Escolha uma opcao: ");
    scanf(" %d", &op);

    return op;

}

int main() {
    
}