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

    // Comparando a populaçao dos dois países e deteminando qual a carta vencedora com base na população.
   
    if (populacao1 > populacao2) {
        printf("A carta 1 venceu!\n");
    } else {
        printf("A carta 2 venceu!\n");
    }

    // Exibindo o resultado final do jogo, comparando a população dos dois países.
    
    printf("\n---- Resultado Final ----\n");

     if (populacao1 > populacao2) {
        printf("%s venceu!\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    if (area1 > area2) {
        printf("%s tem a maior área!\n", nome1);
    } else if (area1 < area2) {
        printf("%s tem a maior área!\n", nome2);
    } else {
        printf("Empate na área!\n");
    }

    return 0;
}
