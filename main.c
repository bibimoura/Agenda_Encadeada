#include "TLinkedList.h"
#include <stdio.h>

//Menu
int menu(){
    int op = 5;
    printf("=-=-=-=-=-=-=-=-=-=-= Agenda de contatos =-=-=-=-=-=-=-=-=-=-=\n");
    printf("1 -> Cadastro de novo contato\n");
    printf("2 -> Imprimir agendar\n");
    printf("3 -> Deletar um contato\n");
    printf("4 -> Salvar\n");
    printf("0 -> Sair\n");
    printf("Sua opçao: ");
    scanf("%d", &op);
    getchar();
    return op;
}

int main(){

    TLinkedList* agenda = list_create();
    int op;

    //Ler a Agenda

    do{
        op = menu();
        switch(op){
            case 1:
                //Cadastro de novo contato
                TContato c = TContato_read_ui();
                if(list_insert_end(agenda, c))
                    puts("Inserido com sucesso!");
                else
                    puts("Erro ao inserir o contato!");
                break;
            case 2: 
                // Imprimir agendar
                list_print(agenda);
                break;
            case 3:
                // Deletar um contato
                char nome[128];
                printf("Digite o nome do contato a deletar: ");
                scanf(" %127[^\n]", nome);

                if(list_delete(agenda, nome))
                    puts("Contato deletado com sucesso!");
                else
                    puts("Erro ao deletar um contato!");
                break;
            case 4:
                //Salvar os Contatos

                break;
            case 0: 
                puts("Até outra hora!");
                break;
            default: 
                puts("Opção inválida!");
        }
    } while(op!=0);
    return 0;
}