#include <stdio.h>

int main() {
    char estado, estado2;
    char codcarta[4], codcarta2[4];
    char ncidade[50], ncidade2[50];
    int populacao, populacao2, NPT, NPT2;
    float area, area2, PIB, PIB2;
    float densidade, densidade2;
    float PIBpercapita, PIBpercapita2;

    //CARTA UM

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

    densidade = populacao / area;
    PIBpercapita = PIB / populacao; 

    //CARTA DOIS

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

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;

    //EXIBICAO DOS DADOS

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codcarta);
    printf("Cidade: %s\n", ncidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", NPT);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", PIBpercapita);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", ncidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", NPT2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);

    return 0;
}
