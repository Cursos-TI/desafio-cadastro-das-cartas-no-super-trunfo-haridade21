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
    float pibPerCapita1 = (pib1 * 1e9) / populacao1, pibPerCapita2 = (pib2 * 1e9) / populacao2;  // PIB per Capita
    // Cálculo do Super Poder
    float superPoder1 = (float)(populacao1 + area1 + pib1 * 1e9 + pontos1 + (1 / densidade1) + pibPerCapita1);
    float superPoder2 = (float)(populacao2 + area2 + pib2 * 1e9 + pontos2 + (1 / densidade2) + pibPerCapita2);
    
    // PIB per Capita
    // Exibição dos dados da primeira carta (São Paulo)
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    

    // Exibição dos dados da segunda carta (Rio de Janeiro)

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

     // Exibição das comparações
     printf("\nComparação de Cartas:\n");

     // Comparação da população
     printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
 
     // Comparação da área
     printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
 
     // Comparação do PIB
     printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
 
     // Comparação do número de pontos turísticos
     printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos1 > pontos2));
 
     // Comparação da densidade populacional (quanto menor, melhor)
     printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade1 > densidade2));
 
     // Comparação do PIB per capita
     printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
 
     // Comparação do Super Poder
     printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;
}