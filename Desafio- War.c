#include <stdio.h>


// Struct Territorio:
// Representa um território com nome, cor do exército e tropas

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[5];  // Vetor para armazenar os 5 territórios
    int i;

    printf("============================================\n");
    printf("       Sistema de Cadastro de Territórios\n");
    printf("============================================\n");

    // Entrada dos dados: cadastro dos 5 territórios
    
    for (i = 0; i < 5; i++) {
        printf("\nCadastro do Território %d:\n", i + 1);

        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    
    printf("\n============================================\n");
    printf("         Territórios Cadastrados\n");
    printf("============================================\n");

    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    printf("\nFim do programa.\n");

    return 0;
}
