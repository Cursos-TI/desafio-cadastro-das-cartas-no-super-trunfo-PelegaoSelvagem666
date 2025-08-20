#include <stdio.h>

int main() {
    char estado, estado2;
    char codcarta[4], codcarta2[4];
    char ncidade[50], ncidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2, PIB, PIB2;
    double densidade, densidade2;
    double PIBpercapita, PIBpercapita2;
    double densidadeinversa, densidadeinversa2;
    double superpoder1, superpoder2;
    int NPT, NPT2;
    int resulpopulacao, resularea, resulPIB, resulNPT, resulPIBpercapita, resuldensidade, resulsuperpoder;

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
    scanf("%lu", &populacao);

    printf("Digite a area:\n");
    scanf("%lf", &area);

    printf("Digite o PIB:\n");
    scanf("%lf", &PIB);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &NPT);

    densidade = populacao / area;
    PIBpercapita = PIB / populacao; 
    densidadeinversa = area / populacao;
    superpoder1 = populacao + area + PIB + NPT + PIBpercapita + densidadeinversa;

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
    scanf("%lu", &populacao2);

    printf("Digite a area:\n");
    scanf("%lf", &area2);

    printf("Digite o PIB:\n");
    scanf("%lf", &PIB2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &NPT2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    densidadeinversa2 = area2 / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + NPT2 + PIBpercapita2 + densidadeinversa2;

    //EXIBICAO DOS DADOS

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codcarta);
    printf("Cidade: %s\n", ncidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", NPT);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capita: %.2lf\n", PIBpercapita);
    printf("Super Poder: %lf\n", superpoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", ncidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", NPT2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2lf\n", PIBpercapita2);
    printf("Super Poder: %lf\n", superpoder2);

    //COMPARACAO DOS SUPER PODERES
    resulpopulacao = populacao > populacao2;
    resularea = area > area2;
    resulPIB = PIB > PIB2; 
    resulNPT = NPT > NPT2;
    resulPIBpercapita = PIBpercapita > PIBpercapita2;
    resuldensidade = densidade > densidade2;
    resulsuperpoder = superpoder1 > superpoder2;

    printf("\n=== RESULTADOS DA COMPARACAO ===\n");
    printf("População: Carta 1 Venceu(%d)\n", resulpopulacao);
    printf("Área: Carta 1 Venceu(%d)\n", resularea);
    printf("PIB: Carta 1 Venceu(%d)\n", resulPIB);
    printf("Pontos Turísticos: Carta 1 Venceu(%d)\n", resulNPT);
    printf("PIB per capita: Carta 1 Venceu(%d)\n", resulPIBpercapita);
    printf("Densidade: Carta 1 Venceu(%d)\n", resuldensidade);
    printf("Super Poder: Carta 1 Venceu(%d)\n", resulsuperpoder);

    return 0;
}
