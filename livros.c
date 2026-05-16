#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livros.h"

struct livro {
    int codigo;
    char titulo[50];
    char autor[50];
    int ano_publicacao;
    int qtd_disp;
    struct livro *proximo;
} ;

int cadastrarLivro(int codigo, const char titulo[], const char autor[], int ano_publicacao, int qtd_disp) {
    Livro *novoLivro = malloc(sizeof(Livro));
    if (novoLivro == NULL) {
        printf("Memória insuficiente para cadastrar o livro.\n");
        return 0;
    }

    novoLivro->codigo = codigo;
    strncpy(novoLivro->titulo, titulo, sizeof(novoLivro->titulo) - 1);
    novoLivro->titulo[sizeof(novoLivro->titulo) - 1] = '\0';
    strncpy(novoLivro->autor, autor, sizeof(novoLivro->autor) - 1);
    novoLivro->autor[sizeof(novoLivro->autor) - 1] = '\0';
    novoLivro->ano_publicacao = ano_publicacao;
    novoLivro->qtd_disp = qtd_disp;
    novoLivro->proximo = listarLivros;
    listarLivros = novoLivro;

    return 1;
}

void listarLivros(void) {
    if (listarLivros == NULL) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    for (Livro *p = listarLivros; p != NULL; p = p->proximo) {
        printf("Código: %d\n", p->codigo);
        printf("Título: %s\n", p->titulo);
        printf("Autor: %s\n", p->autor);
        printf("Ano de Publicação: %d\n", p->ano_publicacao);
        printf("Quantidade Disponível: %d\n", p->qtd_disp);
        printf("-----------------------------\n");
    }
}