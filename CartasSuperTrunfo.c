#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char estado;
    int numeroCidade;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Cidade;

// Função para coletar os dados de uma cidade
void inserirDados(Cidade *c) {
    printf("Estado (A-H): ");
    scanf(" %c", &c->estado);
    printf("Número da Cidade (1-4): ");
    scanf("%d", &c->numeroCidade);
    printf("Nome: ");
    scanf(" %[^\n]", c->nome);
    printf("Populacao: ");
    scanf("%d", &c->populacao);
    printf("Area (em km²): ");
    scanf("%f", &c->area);
    printf("PIB (em milhoes): ");
    scanf("%f", &c->pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c->pontosTuristicos);

    // Cálculo das propriedades derivadas
    c->densidadePopulacional = (c->area > 0) ? c->populacao / c->area : 0;
    c->pibPerCapita = (c->populacao > 0) ? (c->pib * 1000000) / c->populacao : 0;
    c->superPoder = c->populacao + c->area + (c->pib * 1000000) + c->pontosTuristicos;
}

// Função para exibir os dados de uma cidade
void exibirDados(Cidade c) {
    printf("\nDados da cidade:\n");
    printf("Codigo: %c%02d\n", c.estado, c.numeroCidade);
    printf("Nome: %s\n", c.nome);
    printf("Populacao: %d\n", c.populacao);
    printf("Area: %.2f km²\n", c.area);
    printf("PIB: %.2f milhoes\n", c.pib);
    printf("Pontos Turisticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", c.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", c.pibPerCapita);
    printf("Super Poder: %.2f\n", c.superPoder);
}

// Função para comparar duas cidades
void compararCidades(Cidade c1, Cidade c2) {
    printf("\nComparação entre %s e %s:\n", c1.nome, c2.nome);

    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: ");
    if (c1.densidadePopulacional < c2.densidadePopulacional)
        printf("%s vence!\n", c1.nome);
    else if (c1.densidadePopulacional > c2.densidadePopulacional)
        printf("%s vence!\n", c2.nome);
    else
        printf("Empate!\n");

    // Comparação de População
    printf("População: ");
    printf("%s vence!\n", (c1.populacao > c2.populacao) ? c1.nome : c2.nome);

    // Comparação de Área
    printf("Área: ");
    printf("%s vence!\n", (c1.area > c2.area) ? c1.nome : c2.nome);

    // Comparação de PIB
    printf("PIB Total: ");
    printf("%s vence!\n", (c1.pib > c2.pib) ? c1.nome : c2.nome);

    // Comparação de PIB per Capita
    printf("PIB per Capita: ");
    printf("%s vence!\n", (c1.pibPerCapita > c2.pibPerCapita) ? c1.nome : c2.nome);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: ");
    printf("%s vence!\n", (c1.pontosTuristicos > c2.pontosTuristicos) ? c1.nome : c2.nome);

    // Comparação do Super Poder
    printf("Super Poder: ");
    printf("%s vence!\n", (c1.superPoder > c2.superPoder) ? c1.nome : c2.nome);
}

int main() {
    Cidade cidade1, cidade2;

    // Inserir dados das duas cidades
    printf("Insira os dados da primeira cidade:\n");
    inserirDados(&cidade1);
    printf("\Insira os dados da segunda cidade:\n");
    inserirDados(&cidade2);

    // Exibir os dados das cidades
    exibirDados(cidade1);
    exibirDados(cidade2);

    // Comparar as cidades
    compararCidades(cidade1, cidade2);

    return 0;
}