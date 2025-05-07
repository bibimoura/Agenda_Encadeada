#include "TContato.h"
#include <stdio.h>
/**
 * Faz a leitura dos dados
 * @return TContato;
 */
TContato TContato_read_ui()
{
    TContato c;

    printf("Digite o nome: ");
    scanf(" %127[^\n]", c.nome);
    printf("Digite o telefone:");
    scanf(" %14[^\n]", c.telefone);

    return c;
}

/**
 * Faz a leitura dos dados de um contato via uma linha de string
 * @param char* linha de str no formato csv
 * @return TContato;
 */
TContato TContato_read_from_str_csv(char *);
/**
 * Imprime um contato usando a saída padrão.
 * @param TContato;
 */
void TContato_print(TContato c)
{
    printf("Nome: %s\n", c.nome);
    printf("Telefone: %s\n", c.telefone);
    printf("----------------------------\n");
}
/**
 * Imprime um contato no formato csv na string passada.
 * @param TContato;
 */
void TContato_print_csv(TContato c, char*);
