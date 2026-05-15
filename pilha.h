typedef struct Historico {
    char operacao[200];

    struct Historico *prox;
} Historico;

void adicionarElementoTopoPilha(Historico **topo, char operacao[]);
void mostrarHistorico(Historico *topo);
void liberarHistorico(Historico **topo);