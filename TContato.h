#ifndef TCONTATO_H
#define TCONTATO_H

typedef struct {
    char nome[50];
    char telefone[50];
}TContato;

/**
 * Faz a leitura de um contato via uma linha de string
 */
TContato UI_ler_contato();
/**
 * Faz a leitura de um contato via uma linha de string
 * @param
 */
TContato ler_contato_da_str(char*);
/**
 * Imprime um contato usando a saída padrão.
 * @param TContato;
 */
void Tcontato_print(TContato);
/**
 * 
 * @param
 */
void Tcontato_print_csv(TContato, char*);

#endif