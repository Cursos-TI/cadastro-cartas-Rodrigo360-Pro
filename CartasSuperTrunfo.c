#include <stdio.h>

#define MAX_NOME 50

// Passo 1: criar uma estrutura para representar uma carta do jogo.
typedef struct {
    char pais[MAX_NOME];
    char cidade[MAX_NOME];
    unsigned long long int populacao;
    long double area;
    long double pib;
    int pontosTuristicos;
    long double densidadePopulacional;
    long double pibPerCapita;
} Carta;

// Passo 2: função para cadastrar os dados da carta.
void cadastrarCarta(Carta *carta, int numero) {
    printf("\n=== Cadastro da Carta %d ===\n", numero);
    printf("Nome do pais: ");
    scanf("%49s", carta->pais);

    printf("Nome da cidade: ");
    scanf("%49s", carta->cidade);

    printf("Populacao: ");
    scanf("%llu", &carta->populacao);

    printf("Area em km2: ");
    scanf("%Lf", &carta->area);

    printf("PIB: ");
    scanf("%Lf", &carta->pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Passo 3: calcular as propriedades do nivel aventureiro.
    if (carta->area > 0) {
        carta->densidadePopulacional = carta->populacao / carta->area;
    } else {
        carta->densidadePopulacional = 0;
    }

    if (carta->populacao > 0) {
        carta->pibPerCapita = carta->pib / carta->populacao;
    } else {
        carta->pibPerCapita = 0;
    }
}

// Passo 4: função para exibir os dados da carta.
void exibirCarta(Carta carta) {
    printf("\n--- Carta: %s / %s ---\n", carta.pais, carta.cidade);
    printf("Populacao: %llu\n", carta.populacao);
    printf("Area: %.2Lf km2\n", carta.area);
    printf("PIB: %.2Lf\n", carta.pib);
    printf("Pontos turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade populacional: %.2Lf hab/km2\n", carta.densidadePopulacional);
    printf("PIB per capita: %.2Lf\n", carta.pibPerCapita);
}

long double calcularSuperPoder(Carta carta) {
    return (long double)carta.populacao
        + carta.area
        + carta.pib
        + carta.pontosTuristicos
        + carta.densidadePopulacional
        + carta.pibPerCapita;
}

void compararAtributo(const char *nome, long double valor1, long double valor2, int menorVence) {
    printf("%s: Carta 1 = %.2Lf | Carta 2 = %.2Lf -> ", nome, valor1, valor2);

    if (valor1 == valor2) {
        printf("Empate\n");
    } else if ((menorVence && valor1 < valor2) || (!menorVence && valor1 > valor2)) {
        printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");
    }
}

int main() {
    Carta carta1;
    Carta carta2;
    long double superPoder1;
    long double superPoder2;

    printf("Bem-vindo ao nivel Mestre do Super Trunfo!\n");
    printf("Agora vamos cadastrar duas cartas e calcular as propriedades avancadas.\n");

    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    printf("\n===== CARTA 1 =====");
    exibirCarta(carta1);

    printf("\n===== CARTA 2 =====");
    exibirCarta(carta2);

    printf("\n--- Comparacao das propriedades ---\n");
    compararAtributo("Populacao", (long double)carta1.populacao, (long double)carta2.populacao, 0);
    compararAtributo("Area", carta1.area, carta2.area, 0);
    compararAtributo("PIB", carta1.pib, carta2.pib, 0);
    compararAtributo("Pontos turisticos", carta1.pontosTuristicos, carta2.pontosTuristicos, 0);
    compararAtributo("Densidade populacional", carta1.densidadePopulacional, carta2.densidadePopulacional, 1);
    compararAtributo("PIB per capita", carta1.pibPerCapita, carta2.pibPerCapita, 0);

    superPoder1 = calcularSuperPoder(carta1);
    superPoder2 = calcularSuperPoder(carta2);
    printf("\n--- Super Poder ---\n");
    compararAtributo("Super Poder", superPoder1, superPoder2, 0);

    printf("\nNivel Mestre concluido com sucesso!\n");

    return 0;
}
