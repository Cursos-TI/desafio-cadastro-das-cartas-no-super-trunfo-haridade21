#include <stdio.h>

// Definindo a estrutura para a carta
typedef struct {
    char estado[200];
    char codigo[10];
    char cidade[100];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibPerCapita;
} Carta;

void exibir_menu() {
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capita\n");
}

int comparar(int atributo, Carta carta1, Carta carta2) {
    switch (atributo) {
        case 1:  // População
            return (carta1.populacao > carta2.populacao) ? 1 : (carta1.populacao < carta2.populacao) ? -1 : 0;
        case 2:  // Área
            return (carta1.area > carta2.area) ? 1 : (carta1.area < carta2.area) ? -1 : 0;
        case 3:  // PIB
            return (carta1.pib > carta2.pib) ? 1 : (carta1.pib < carta2.pib) ? -1 : 0;
        case 4:  // Pontos Turísticos
            return (carta1.pontos > carta2.pontos) ? 1 : (carta1.pontos < carta2.pontos) ? -1 : 0;
        case 5:  // Densidade Demográfica
            return (carta1.densidade < carta2.densidade) ? 1 : (carta1.densidade > carta2.densidade) ? -1 : 0;
        case 6:  // PIB Per Capita
            return (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : (carta1.pibPerCapita < carta2.pibPerCapita) ? -1 : 0;
        default:
            return 0;
    }
}

int main() {
    // Criando as cartas
    Carta carta1 = {"São Paulo", "A21", "São Paulo", 12325000, 1521.11, 699.28, 100, 12325000 / 1521.11, 699.28 / 12325000};
    Carta carta2 = {"Rio de Janeiro", "B22", "Rio de Janeiro", 6748000, 1200.25, 300.50, 50, 6748000 / 1200.25, 300.50 / 6748000};

    int atributo1, atributo2;

    // Exibindo menu e selecionando atributos
    while (1) {
        exibir_menu();
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 6) {
            printf("Atributo inválido. Tente novamente.\n");
            continue;
        }

        printf("Escolha o segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
            printf("Atributo inválido ou mesmo atributo selecionado. Tente novamente.\n");
            continue;
        }
        
        break;  // Se as escolhas forem válidas, sai do loop
    }

    // Comparando os atributos
    int resultado1 = comparar(atributo1, carta1, carta2);
    int resultado2 = comparar(atributo2, carta1, carta2);

    // Exibição do resultado
    printf("\nComparação entre %s e %s:\n", carta1.estado, carta2.estado);
    printf("Atributo 1: ");
    
    switch (atributo1) {
        case 1: printf("População (%d vs %d)\n", carta1.populacao, carta2.populacao);
         break;
        case 2: printf("Área (%.2f km² vs %.2f km²)\n", carta1.area, carta2.area);
         break;
        case 3: printf("PIB (R$ %.2f bilhões vs R$ %.2f bilhões)\n", carta1.pib, carta2.pib);
         break;
        case 4: printf("Pontos Turísticos (%d vs %d)\n", carta1.pontos, carta2.pontos);
         break;
        case 5: printf("Densidade Demográfica (%.2f vs %.2f)\n", carta1.densidade, carta2.densidade);
         break;
        case 6: printf("PIB Per Capita (R$ %.2f vs R$ %.2f)\n", carta1.pibPerCapita, carta2.pibPerCapita);
         break;
    }

    printf("Atributo 2: ");
    switch (atributo2) {
        case 1: printf("População (%d vs %d)\n", carta1.populacao, carta2.populacao);
         break;
        case 2: printf("Área (%.2f km² vs %.2f km²)\n", carta1.area, carta2.area);
         break;
        case 3: printf("PIB (R$ %.2f bilhões vs R$ %.2f bilhões)\n", carta1.pib, carta2.pib);
         break;
        case 4: printf("Pontos Turísticos (%d vs %d)\n", carta1.pontos, carta2.pontos);
         break;
        case 5: printf("Densidade Demográfica (%.2f vs %.2f)\n", carta1.densidade, carta2.densidade);
         break;
        case 6: printf("PIB Per Capita (R$ %.2f vs R$ %.2f)\n", carta1.pibPerCapita, carta2.pibPerCapita);
         break;
    }

    if (resultado1 > 0 && resultado2 > 0) {
        printf("\n%s venceu! (Ambos os atributos foram ganhados)\n", carta1.estado);
    } else if (resultado1 < 0 && resultado2 < 0) {
        printf("\n%s venceu! (Ambos os atributos foram ganhados)\n", carta2.estado);
    } else {
        printf("\nEmpate! (Pelo menos um atributo foi empatado)\n");
    }

    return 0;
}
