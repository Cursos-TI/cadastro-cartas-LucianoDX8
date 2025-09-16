#include <stdio.h>
//Desafio, Criando as Cartas do Super Trunfo

int main(){

    printf("Bem vindo ao jogo super trunfo!\n");
    printf("Crie duas cartas!!!\n");
    printf("\n");

    int carta;
    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int Nu_Pontos_Turusticos;

    //Criando primeria Carta...
    printf("Número da primeira carta: ");
    scanf("%d", &carta);

    printf("Digite o nome de um estado: ");
    scanf("%s", &estado);

    printf("Código da carta: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em Km²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Nu_Pontos_Turusticos);
    printf("\n");

    //Resultado da primeira carta...
    printf("-- Carta criada com sucesso!!!\n");
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Número de pontos turísticos: %d\n", Nu_Pontos_Turusticos);

    //Criando a segunda carta...
    printf("\n");
    printf("Número da segunda carta: ");
    scanf("%d", &carta);

    printf("Digite o nome de um estado: ");
    scanf("%s", &estado);

    printf("Código da carta: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em Km²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Nu_Pontos_Turusticos);
    printf("\n");

    //Resultado da segunda carta...
    printf("-- Carta criada com sucesso!!!\n");
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Número de pontos turísticos: %d\n", Nu_Pontos_Turusticos);

    printf("\n");
    printf("Continua em breve...\n");
    return 0;
}
