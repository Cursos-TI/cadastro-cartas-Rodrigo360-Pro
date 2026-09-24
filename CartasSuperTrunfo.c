#include <stdio.h>

int main(){

    printf("Bem vindo ao meu primeiro jogo em C!\n");
    printf("Neste jogo, voçê vai aprender sobre varios paises do mundo.\n");
    
// definindo informaçâo sobre o Brasil.
    
    char nome1[50] = "Brasil";
    char cidade1[50] = "Goiania";
    int populacao1 = 1530000;
    float area1 = 8515767.0;

    // definindo informação sobre a Argentina.

    char nome2[50] = "Argentina";
    char cidade2[50] = "Buenos Aires";
    int populacao2 = 45195777;
    float area2 = 2780400.0;

    // Exibindo as informações sobre os paise em cartas separadas.

    printf("\n---- Primeira Carta ----\n");
    printf("Nome do país: %s\n", nome1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);  
    
    printf("\n---- Segunda Carta ----\n");
    printf("Nome do país: %s\n", nome2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);

    int opcao;
    printf("\nEscolha uma opção para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 0) {
        printf("Jogo encerrado.\n");
        return 0;
    }

    printf("\n---- Resultado Final ----\n");

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("%s venceu em população!\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("%s venceu em população!\n", nome2);
            } else {
                printf("Empate em população!\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("%s venceu em área!\n", nome1);
            } else if (area1 < area2) {
                printf("%s venceu em área!\n", nome2);
            } else {
                printf("Empate em área!\n");
            }
            break;
        default:
            printf("Opção inválida. Escolha 1, 2 ou 0.\n");
    }

    return 0;
}
