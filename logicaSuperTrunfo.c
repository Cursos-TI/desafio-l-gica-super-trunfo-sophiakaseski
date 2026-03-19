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

    // Variáveis do menu
    int opcao1;
    int opcao2;

    // Variáveis para armazenar os valores escolhidos
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;
    float somaCarta1, somaCarta2;

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

    // Menu para escolha do primeiro atributo

    printf("\nEscolha o primeiro atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Digite a primeira opcao: ");
    scanf("%d", &opcao1);

    // Menu para escolha do segundo atributo

    printf("\nEscolha o segundo atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Digite a segunda opcao: ");
    scanf("%d", &opcao2);

    // Verifica se o usuário escolheu o mesmo atributo duas vezes

    if (opcao1 == opcao2) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    // Define os valores do primeiro atributo escolhido

    switch (opcao1) {
        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;
        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;
        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            break;
        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            break;
        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            break;
        default:
            printf("\nPrimeira opcao invalida!\n");
            return 0;
    }

    // Define os valores do segundo atributo escolhido

    switch (opcao2) {
        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;
        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;
        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            break;
        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            break;
        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            break;
        default:
            printf("\nSegunda opcao invalida!\n");
            return 0;
    }

    // Ajuste da regra da densidade demográfica
    // Como menor valor vence, transformamos em valor inverso para somar corretamente

    if (opcao1 == 5) {
        valor1Carta1 = 1 / valor1Carta1;
        valor1Carta2 = 1 / valor1Carta2;
    }

    if (opcao2 == 5) {
        valor2Carta1 = 1 / valor2Carta1;
        valor2Carta2 = 1 / valor2Carta2;
    }

    // Soma dos atributos escolhidos

    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    // Exibição dos resultados

    printf("\nResultado da comparacao\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nSoma dos atributos da Carta 1: %.2f\n", somaCarta1);
    printf("Soma dos atributos da Carta 2: %.2f\n", somaCarta2);

    // Operador ternário para definir vencedor

    printf("\nVencedor: %s\n",
        (somaCarta1 > somaCarta2) ? cidade1 :
        (somaCarta2 > somaCarta1) ? cidade2 : "Empate!");

return 0;
}
