#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado, estado2;
    char codcarta[4], codcarta2[4];
    char ncidade[50], ncidade2[50];
    int populacao, populacao2, NPT, NPT2;
    float area, area2, PIB, PIB2;

    printf("Carta 1:\n");

    printf("Digite o estado:\n");
    scanf(" %c", &estado);

    printf("Digite o código:\n");
    scanf(" %s", codcarta);

    getchar();

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", ncidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &NPT);

    printf("\nCarta 2:\n");

    printf("Digite o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código:\n");
    scanf(" %s", codcarta2);

    getchar();

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", ncidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &NPT2);

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codcarta);
    printf("Cidade: %s\n", ncidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", NPT);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", ncidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", NPT2);

    return 0;
}
