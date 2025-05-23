#include <stdio.h>

int main() {
    // Variáveis para a carta 1 & 2
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1.0 / densidade1) + pontosTuristicos1;

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1.0 / densidade2) + pontosTuristicos2;

    // Comparações
    int vPopulacao = populacao2 > populacao1;
    int vArea = area2 > area1;
    int vPIB = pib2 > pib1;
    int vPontos = pontosTuristicos2 > pontosTuristicos1;
    int vDensidade = densidade2 < densidade1; // menor vence
    int vPIBperCapita = pibPerCapita2 > pibPerCapita1;
    int vSuperPoder = superPoder2 > superPoder1;

    // Exibição carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Exibição dos resultados
    printf("\nResultados da Batalha:\n");
    printf("População: Carta %d Venceu\n", vPopulacao + 1);
    printf("Área: Carta %d Venceu\n", vArea + 1);
    printf("PIB: Carta %d Venceu\n", vPIB + 1);
    printf("Pontos Turísticos: Carta %d Venceu\n", vPontos + 1);
    printf("Densidade Populacional (menor vence): Carta %d Venceu\n", vDensidade + 1);
    printf("PIB per Capita: Carta %d Venceu\n", vPIBperCapita + 1);
    printf("Super Poder: Carta %d Venceu\n", vSuperPoder + 1);

    return 0;
}