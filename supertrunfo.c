#include <stdio.h>

int main() {
    // Definição das variáveis para os dados das cartas
    char estado1[200] = "São Paulo", estado2[200] = "Rio de Janeiro"; // Estados
    char codigo1[10] = "A21", codigo2[10] = "B22";  // Códigos das cartas
    char cidade1[100] = "São Paulo", cidade2[100] = "Rio de Janeiro";  // Cidades
    int populacao1 = 12325000, populacao2 = 6748000;  // População
    float area1 = 1521.11, area2 = 1200.25;  // Área em km²
    float pib1 = 699.28, pib2 = 300.50;  // PIB em bilhões de reais
    int pontos1 = 100, pontos2 = 50;  // Número de pontos turísticos

    // Exibição dos dados da primeira carta (São Paulo)
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibição dos dados da segunda carta (Rio de Janeiro)
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
