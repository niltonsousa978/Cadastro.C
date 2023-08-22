#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar as informações
struct Cadastro {
    char nome[50];
    int idade;
    int matricula;
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[200];
    float valorMensalidade;
};

int main() {
    struct Cadastro aluno; // Declaração de uma variável de Cadastro
    
    // Coleta de informações do usuário
    printf("Cadastro de Aluno\n");
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Matrícula: ");
    scanf("%d", &aluno.matricula);
    getchar(); // Limpeza do buffer

    printf("Endereço: ");
    fgets(aluno.endereco, sizeof(aluno.endereco), stdin);

    printf("Curso: ");
    fgets(aluno.curso, sizeof(aluno.curso), stdin);

    printf("Período: ");
    fgets(aluno.periodo, sizeof(aluno.periodo), stdin);

    printf("Disciplinas: ");
    fgets(aluno.disciplinas, sizeof(aluno.disciplinas), stdin);

    printf("Valor da Mensalidade: ");
    scanf("%f", &aluno.valorMensalidade);

    // Exibição das informações cadastradas
    printf("\nInformações cadastradas:\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Endereço: %s", aluno.endereco);
    printf("Curso: %s", aluno.curso);
    printf("Período: %s", aluno.periodo);
    printf("Disciplinas: %s", aluno.disciplinas);
    printf("Valor da Mensalidade: R$ %.2f\n", aluno.valorMensalidade);

    return 0;
}