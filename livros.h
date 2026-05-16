#ifndef LIVROS_H
#define LIVROS_H

typedef struct livro Livro;

int cadastrarLivro(int codigo, const char titulo[], const char autor[], int ano_publicacao, int qtd_disp);
void listarLivros(void);

#endif // LIVROS_H
