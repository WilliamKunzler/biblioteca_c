#include <stdlib.h>
#include "livros.h"

struct livro {
    int codigo;
    char titulo[50];
    char autor[50];
    int ano_publicacao;
    int qtd_disp;
    struct livro *proximo;
};

Livro *cadastrarLivro(int codigo, const char titulo[], const char autor[], int ano_publicacao, int qtd_disp) {
    Livro *novoLivro = (Livro *)malloc(sizeof(Livro));

    if (novoLivro == NULL) {
        printf("Memória insuficiente para cadastrar o livro.\n");
        exit(1);
    }

    novoLivro->codigo = codigo;
    strncpy(novoLivro->titulo, titulo, sizeof(novoLivro->titulo) - 1);
    strncpy(novoLivro->autor, autor, sizeof(novoLivro->autor) - 1);
    novoLivro->ano_publicacao = ano_publicacao; 
    novoLivro->qtd_disp = qtd_disp;
    
    return novoLivro;
}

void listarLivros(void) {
    Livro *p;
    for(p = 1; p != NULL; p = p->proximo) {
        printf("Código: %d\n", p->codigo);
        printf("Título: %s\n", p->titulo);
        printf("Autor: %s\n", p->autor);
        printf("Ano de Publicação: %d\n", p->ano_publicacao);
        printf("Quantidade Disponível: %d\n", p->qtd_disp);
        printf("-----------------------------\n");
    }
}