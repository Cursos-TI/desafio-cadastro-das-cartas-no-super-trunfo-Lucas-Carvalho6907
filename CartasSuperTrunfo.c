#include <stdio.h>

int main() {
    printf("Desafio super trunfo: Comparação das cartas!\n");

    char estado1[50], estado2[50];
    char codestado1[50], codestado2[50];
    char cidestado1[50], cidestado2[50];
    int habestado1, habestado2;
    float areacidade1, areacidade2;
    float PIBestado1, PIBestado2;

    // Entrada para o primeiro estado
    printf("Digite o estado 1: \n");
    scanf("%s", estado1);

    printf("Digite o código da cidade do estado 1: \n");
    scanf("%s", codestado1);

    printf("Digite a cidade do estado 1: \n");
    scanf("%s", cidestado1);

    printf("Digite a quantidade de habitantes da cidade 1: \n");
    scanf("%d", &habestado1);

    printf("Digite a área em km² da cidade 1: \n");
    scanf("%f", &areacidade1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &PIBestado1);

    // Entrada para o segundo estado
    printf("Digite o estado 2: \n");
    scanf("%s", estado2);

    printf("Digite o código da cidade do estado 2: \n");
    scanf("%s", codestado2);

    printf("Digite a cidade do estado 2: \n");
    scanf("%s", cidestado2);

    printf("Digite a quantidade de habitantes da cidade 2: \n");
    scanf("%d", &habestado2);

    printf("Digite a área em km² da cidade 2: \n");
    scanf("%f", &areacidade2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &PIBestado2);

    // Comparação das cartas

    printf("Comparação das Cartas: \n");

    // Comparar baseando-se no PIB
    if (PIBestado1 > PIBestado2) {
        printf("Carta 1 venceu com maior PIB!\n");
    } else if (PIBestado1 < PIBestado2) {
        printf("Carta 2 venceu com maior PIB!\n");
    } else {
        printf("PIB é igual para as duas cidades!\n");
    }

    // Comparar baseando-se na população
    if (habestado1 > habestado2) {
        printf("Carta 1 venceu com mais habitantes!\n");
    } else if (habestado1 < habestado2) {
        printf("Carta 2 venceu com mais habitantes!\n");
    } else {
        printf("Quantidade de habitantes é igual para as duas cidades!\n");
    }

    // Comparar baseando-se na área
    if (areacidade1 > areacidade2) {
        printf("Carta 1 venceu com maior área!\n");
    } else if (areacidade1 < areacidade2) {
        printf("Carta 2 venceu com maior área!\n");
    } else {
        printf("Área é igual para as duas cidades!\n");
    }

    return 0;
}