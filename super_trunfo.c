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

    // Exibição das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}