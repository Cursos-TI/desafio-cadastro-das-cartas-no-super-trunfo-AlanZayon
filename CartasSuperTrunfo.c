#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Variáveis para armazenar informações da cidade
    char estado;
    int numeroCidade;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada dos dados da cidade
    printf("Estado (A-H): ");
    scanf(" %c", &estado);
    printf("Número da Cidade (1-4): ");
    scanf("%d", &numeroCidade);
    printf("Nome: ");
    scanf(" %[^\n]", nome);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area (em km²): ");
    scanf("%f", &area);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da cidade
    printf("\nDados da cidade :\n");
    printf("Codigo: %c%02d\n", estado, numeroCidade);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f milhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
