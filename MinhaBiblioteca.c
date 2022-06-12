#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MinhaBiblioteca.h"

int retornaQuatidadeDeTrocas(char * mensagemAntiga, int tamanhoMensagem, char antigo, char novo, char * novaMensagem);

int retornaQuatidadeDeTrocas(char * mensagemAntiga, int tamanhoMensagem, char antigo, char novo, char * novaMensagem) {
    int i=0, quantidadeDeTrocas=0;
    strcpy(novaMensagem, mensagemAntiga);
    for(i; i < tamanhoMensagem; i++) {
        if(mensagemAntiga[i] == antigo) {
            novaMensagem[i] = novo;
            quantidadeDeTrocas++;
        }
    }
    return quantidadeDeTrocas;
}

