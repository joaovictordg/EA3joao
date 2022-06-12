#include <stdio.h>
#include <stdlib.h>
#include "MinhaBiblioteca.h"

#define TAMANHO 100

int main() {
    char * mensagem;
    char antigo;
    char novo;
    char * novaMensagem;
    int quantidadeTrocas;

    mensagem = (char *) calloc(TAMANHO, sizeof(char));
    novaMensagem = (char *) calloc(TAMANHO, sizeof(char));

    printf("Digite a mensagem: ");
    scanf("%100[^\n]s",mensagem);
    printf("\nAgora digite o caracter a ser substituido: ");
    scanf(" %c",&antigo);
    printf("\nAgora o caracter novo: ");
    scanf(" %c",&novo);
    quantidadeTrocas = retornaQuatidadeDeTrocas(mensagem,TAMANHO,antigo,novo,novaMensagem);
    printf("\n\nMensagem: %s \nNova Mensagem: %s \nNumero de Trocas: %d",mensagem,novaMensagem,quantidadeTrocas);
    return 0;
}
