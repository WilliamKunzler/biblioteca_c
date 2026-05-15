#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void adicionarElementoTopoPilha(Historico **topo, char operacao[]) {
    Historico *novo = (Historico*) malloc(sizeof(Historico));
    
    strcpy(novo->operacao, operacao);
    novo->prox = *topo;
    *topo = novo;
}

void mostrarHistorico(Historico *topo) {

    Historico *aux = topo;

    while(aux != NULL) {
        printf("%s\n", aux->operacao);
        aux = aux->prox;
    }
}

void liberarHistorico(Historico **topo) {

    Historico *aux;

    while(*topo != NULL) {
        aux = *topo;
        *topo = (*topo)->prox;
        free(aux);
    }
}