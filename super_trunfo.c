#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigoCarta1[] = "A01";
    char nomeCidade1[] = "Pancas";
    int populacao1 = 18893;
    float area1 = 837.842;
    double pib1 = 358498.98;
    int pontosTuristicos1 = 14;

    // Carta 2
    char estado2 = 'B';
    char codigoCarta2[] = "B02";
    char nomeCidade2[] = "Colatina";
    int populacao2 = 128622;
    float area2 = 1398.22;
    double pib2 = 4378305000.0;
    int pontosTuristicos2 = 12;

    // Calcula densidade populacional e PIB per capita
    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = (float) pib1 / populacao1;
    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = (float) pib2 / populacao2;

    // Calcula Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibe resultados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Compara cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidadePopulacional1 > densidadePopulacional2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);

    return 0;
}