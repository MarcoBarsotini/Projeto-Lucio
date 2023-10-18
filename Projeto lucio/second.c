#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Curso {
    char nome[50];
    int codigo;
    int duracao;
};

int compararCursos(const void *a, const void *b) {
    return ((struct Curso*)a)->duracao - ((struct Curso*)b)->duracao;
}

int main() {
    int numCursos;

    printf("Quantos cursos deseja adicionar? ");
    scanf("%d", &numCursos);

    struct Curso* cursos = (struct Curso*)malloc(numCursos * sizeof(struct Curso));

    for (int i = 0; i < numCursos; i++) {
        printf("Digite o nome do curso %d: ", i + 1);
        scanf("%s", cursos[i].nome);
        printf("Digite o codigo do curso %d: ", i + 1);
        scanf("%d", &cursos[i].codigo);
        printf("Digite a duracao do curso em meses %d: ", i + 1);
        scanf("%d", &cursos[i].duracao);
    }

    qsort(cursos, numCursos, sizeof(struct Curso), compararCursos);

    printf("---------------------------------------------------------------\n");
    printf("  Curso   |  Codigo  |  Duracao (Meses)\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < numCursos; i++) {
        printf("  %-10s |  %-7d |  %-15d\n", cursos[i].nome, cursos[i].codigo, cursos[i].duracao);
    }
    printf("---------------------------------------------------------------\n");

    free(cursos);

    return 0;
}
