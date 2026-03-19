#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // Variável do menu
    int opcao;

    // Cadastro das cartas

    printf("Cadastro da Carta 1\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Menu interativo

    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    // Comparação de cartas

    switch (opcao) {
        case 1:
            printf("\nComparacao por Populacao\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 2:
            printf("\nComparacao por Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (area2 > area1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3:
            printf("\nComparacao por PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4:
            printf("\nComparacao por Numero de pontos turisticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5:
            printf("\nComparacao por Densidade demografica\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

}
