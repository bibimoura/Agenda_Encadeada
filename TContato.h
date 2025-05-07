#ifndef TCONTATO_H
#define TCONTATO_H

//TAD TContato;

typedef struct {
    char nome[128];
    char telefone[11];
}TContato;

/**
 * Faz a leitura dos dados.
 * @return TContato;
 */
TContato TContato_read_ui();
/**
 * Faz a leitura dos dados de um contato via uma linha de string
 * @param char* linha de str no formato csv
 * @return TContato;
 */
TContato TContato_read_from_str_csv(char*);
/**
 * Imprime um contato usando a saída padrão.
 * @param TContato;
 */
void TContato_print(TContato);
/**
 * Imprime um contato no formato csv na string passada.
 * @param TContato;
 */
void TContato_print_csv(TContato, char*);

#endif