#include <stdio.h>

#define MAX_NOME 50

// Passo 1: criar uma estrutura para representar uma carta do jogo.
typedef struct {
    char pais[MAX_NOME];
    char cidade[MAX_NOME];
    unsigned long int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidadePopulacional;
    double pibPerCapita;
} Carta;

// Passo 2: função para cadastrar os dados da carta.
void cadastrarCarta(Carta *carta, int numero) {
    printf("\n=== Cadastro da Carta %d ===\n", numero);
    printf("Nome do pais: ");
    scanf("%49s", carta->pais);

    printf("Nome da cidade: ");
    scanf("%49s", carta->cidade);

    printf("Populacao: ");
    scanf("%lu", &carta->populacao);

    printf("Area em km2: ");
    scanf("%lf", &carta->area);

    printf("PIB: ");
    scanf("%lf", &carta->pib);

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
    printf("Populacao: %lu\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km2\n", carta.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta.pibPerCapita);
}

int main() {
    Carta carta1;
    Carta carta2;

    printf("Bem-vindo ao nivel Aventureiro do Super Trunfo!\n");
    printf("Agora vamos cadastrar duas cartas e calcular as propriedades avancadas.\n");

    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    printf("\n===== CARTA 1 =====");
    exibirCarta(carta1);

    printf("\n===== CARTA 2 =====");
    exibirCarta(carta2);

    printf("\n--- Comparacao rapida ---\n");
    printf("Carta 1 tem maior populacao? %s\n", (carta1.populacao > carta2.populacao) ? "Sim" : "Nao");
    printf("Carta 1 tem maior area? %s\n", (carta1.area > carta2.area) ? "Sim" : "Nao");
    printf("Carta 1 tem maior densidade populacional? %s\n", (carta1.densidadePopulacional > carta2.densidadePopulacional) ? "Sim" : "Nao");
    printf("Carta 1 tem maior PIB per capita? %s\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? "Sim" : "Nao");

    printf("\nNivel aventureiro concluido com sucesso!\n");

    return 0;
}
