#include <stdio.h>

int main() {
    // Definição das variáveis para os dados das cartas
    char estado1[200] = "São Paulo", estado2[200] = "Rio de Janeiro";
    char codigo1[10] = "A21", codigo2[10] = "B22";  // Códigos das cartas
    char cidade1[100] = "São Paulo", cidade2[100] = "Rio de Janeiro";  // Cidades
    int populacao1 = 12325000, populacao2 = 6748000;  // População
    float area1 = 1521.11, area2 = 1200.25;  // Área em km²
    float pib1 = 699.28, pib2 = 300.50;  // PIB em bilhões de reais
    int pontos1 = 100, pontos2 = 50;  // Número de pontos turísticos
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;  // Densidade demográfica
    float pibPerCapita1 = pib1 / populacao1, pibPerCapita2 = pib2 / populacao2;  // PIB per Capita

    int escolha;  // Variável para a escolha do usuário
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - Sair\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    // Comparação com base na escolha do usuário
    switch (escolha) {
        case 1:
            // Comparando População
            printf("Comparando População:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            // Comparando Área
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("%s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            // Comparando PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("%s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            // Comparando Número de Pontos Turísticos
            printf("Comparando Número de Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("%s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            // Comparando Densidade Demográfica
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            // Regra especial: vence a carta com menor densidade demográfica
            if (densidade1 < densidade2) {
                printf("%s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            // Sair
            printf("Saindo do jogo...\n");
            break;

        default:
            // Opção inválida
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
