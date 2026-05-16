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

    if(topo == NULL) {

        printf("Historico vazio!\n");

        return;
    }

    Historico *aux = topo;

    int contador = 1;

    while(aux != NULL) {

        printf("%d - %s\n", contador, aux->operacao);

        aux = aux->prox;

        contador++;
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