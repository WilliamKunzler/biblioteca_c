#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "livros.h"

#include "pilha.h"

Historico *historicoOperacoes = NULL;
Historico *historicoRetiradas = NULL;

int main()
{
    unsigned int opcao = -1;

    setlocale(LC_ALL, ".UTF8");

    printf("----------------------------\n");
    printf("1 - Cadastrar livro\n");
    printf("2 - Listar livros\n");
    printf("3 - Buscar livro\n");
    printf("4 - Remover livro\n");
    printf("----------------------------\n");
    printf("5 - Histórico de operacoes\n");
    printf("6 - Histórico de retiradas\n");
    printf("----------------------------\n");
    printf("0 - Sair\n");
    printf("----------------------------\n");

    while (opcao != 0)
    {
        printf("Escolha uma opção: ");
        scanf("%u", &opcao);

        switch (opcao)
        {

        case 1:

            printf("Cadastrar livro\n");

            adicionarElementoTopoPilha(&historicoOperacoes,"Livro cadastrado");
            adicionarElementoTopoPilha(&historicoRetiradas,"Dom Casmurro");

            break;

        case 2:

            printf("Listar livros\n");
            break;

        case 3:

            printf("Buscar livro\n");

            break;

        case 4:

            printf("Remover livro\n");

            adicionarElementoTopoPilha(&historicoOperacoes,"Livro removido");

            break;

        case 5:

            printf("Histórico de operacoes\n");

            mostrarHistorico(historicoOperacoes);

            break;

        case 6:

            printf("Histórico de retiradas\n");

            mostrarHistorico(historicoRetiradas);

            break;

        case 0:

            printf("Saindo...\n");

            break;

        default:

            printf("Opção invalida!\n");

            break;
        }
    }

    liberarHistorico(&historicoOperacoes);
    liberarHistorico(&historicoRetiradas);

    return 0;
}