#include <stdio.h>

struct Curso {
    char nome[50];
    int codigo;
    int creditos;
    int duracao;
};

int main() {
    struct Curso cursos[5] = {
        { "Desenvolvimento de Sistemas", 1, 3, 4 },
        { "Agronomia", 2, 4, 2 },
        { "Arquitetura", 3, 3, 5 },
        { "Limpador de Calhas", 4, 4, 2 },
        { "Coveiro", 5, 3, 1

 }
    };

    printf("---------------------------------------------------------------\n");
    printf("  Listagem de Cursos \n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("---------------------------------------------------------------\n");
        printf(" Nome: %-10s | Codigo: %-7d | Credito %-9d | Duracao: %-15d\n", cursos[i].nome, cursos[i].codigo, cursos[i].creditos, cursos[i].duracao);
    printf("---------------------------------------------------------------\n");
    }
    printf("---------------------------------------------------------------\n");

    return 0;
}
