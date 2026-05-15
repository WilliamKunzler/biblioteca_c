#ifndef LIVROS_H
#define LIVROS_H

#define MAX_LIVROS 100

typedef struct livro Livro;

int cadastrarLivro(int codigo, const char titulo[], const char autor[], int ano_publicacao, int qtd_disp);
// int removerLivro(int codigo); 
// int buscarLivro(int codigo, Livro *outLivro); 
void listarLivros(void);

#endif // LIVROS_H
