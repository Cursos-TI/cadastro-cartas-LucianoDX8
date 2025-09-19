#include <stdio.h>
//Desafio, Criando as Cartas do Super Trunfo...
//Criado por Luciano Gonzaga!

int main(){

    printf("Bem vindo ao jogo super trunfo!\n");
    printf("Crie duas cartas!!!\n");
    printf("\n");

    int carta1, carta2;
    char estado[50];
    char codigo[5];
    char cidade[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int Nu_Pontos_Turusticos1, Nu_Pontos_Turusticos2;
    int povo, terra, valor, visita;
    float superPoder1, superPoder2;
    
    //Nova atualização abaixo
    float densidade;
    float pibPerCapita;

    //Criando primeria Carta...
    printf("Número da primeira carta: ");
    scanf("%d", &carta1);

    printf("Digite o nome de um estado: ");
    scanf("%s", &estado);

    printf("Código da carta: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%ld", &populacao1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Nu_Pontos_Turusticos1);
    printf("\n");

    //Nova atualização abaixo
    densidade = populacao1 / area1;  //Calculando densidade
    pibPerCapita = pib1 / populacao1;  //calculando PIB per capita

    //Resultado da primeira carta...
    printf("-- Carta criada com sucesso!!!\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %ld\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", Nu_Pontos_Turusticos1);

    //Nova atualização abaixo
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", pibPerCapita);


    //-------------------  Aqui começa a segunda carta  -----  
    //Criando a segunda carta...
    printf("\n");
    printf("Número da segunda carta: ");
    scanf("%d", &carta2);

    printf("Digite o nome de um estado: ");
    scanf("%s", &estado);

    printf("Código da carta: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Nu_Pontos_Turusticos2);
    printf("\n");

    //Nova atualização abaixo
    densidade = populacao2 / area2;  //Calculando densidade
    pibPerCapita = pib2 / populacao2;  //calculando PIB per capita

    //Resultado da segunda carta...
    printf("-- Carta criada com sucesso!!!\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %ld\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", Nu_Pontos_Turusticos2);

    //Nova atualização abaixo
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", pibPerCapita);


    //Aqui é feito a comparação de valores entres as cartas...
    povo = populacao1 > populacao2;
    terra = area1 > area2;
    valor = pib1 > pib2; 
    visita = Nu_Pontos_Turusticos1 > Nu_Pontos_Turusticos2;

    //Exibindo o resultado dos valores....
    printf("\n");
    printf("Carta Vencedora: %d\n", povo);
    printf("Carta Vencedora: %d\n", terra);
    printf("Carta Vencedora: %d\n", valor);
    printf("Carta Vencedora: %d\n", visita);

    //Faz a soma dos itens da carta 1
    superPoder1 = (1/pib1)+populacao1+area1+Nu_Pontos_Turusticos1;
    printf("\n");
    printf("Super Poder -> carta 1: %2.f\n", superPoder1);
    
    //Faz a soma dos itens da carta 2
    superPoder2 = (1/pib2)+populacao2+area2+Nu_Pontos_Turusticos2;
    printf("\n");
    printf("Super Poder -> carta 2: %2.f\n", superPoder2);

    printf("\n");
    printf("Vencedor: Quem tiver o maior número de super poder, vence!!!\n");

    printf("\n");
    printf("FIM de Jogo...\n");
    return 0;
}