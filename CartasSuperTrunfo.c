#include <stdio.h>

// Desafio Super Trunfo - Países
// Anderson Richard

int main() {



    char cidade1[50], estado1[50] , codigo1[10];
    int populacao1, qtdPtsTuristicos1;
    float area1, pib1;

    char cidade2[50], estado2[50], codigo2[10];
    int populacao2, qtdPtsTuristicos2;
    float area2, pib2;

    printf("Olá!Seja Bem vindo ao jogo Super Trunfo!\n Digite o Codigo da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);

    printf("digite a Cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a População da cidade 1: \n");
    scanf("%i", &populacao1);
    
    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%i", &qtdPtsTuristicos1);


    printf("\nDigite o Codigo da carta 2: \n");
    scanf("%s", codigo2);
    

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);
    

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);
    
    printf("Digite a população da cidade 2: \n");
    scanf("%i", &populacao2);
    

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);
    

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da cidade 2:\n");
    scanf("%i", &qtdPtsTuristicos2);
    

    printf("Primeira Carta\nEstado: %s\nCódigo do estado: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n", estado1, codigo1, cidade1, populacao1, area1, pib1, qtdPtsTuristicos1);
   
    printf("\n\n");


    printf("Segunda Carta\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, qtdPtsTuristicos2);
    

    return 0;
}
