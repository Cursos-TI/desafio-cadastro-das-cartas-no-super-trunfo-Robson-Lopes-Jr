#include <stdio.h>

int main (){

    int carta, carta2;
    char estado[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float popd, popd2;
    float pibcapita, pibcapita2;
    float densidadepop, densidadepop2;

    printf("Digite o número da carta: \n");
    scanf("%d", &carta);

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade de pessoas na população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &turismo);

    printf("Digite a população em decimal (bilhões): \n");
    scanf("%f", &popd);

    printf("Digite o número da 2ª carta: \n");
    scanf("%d", &carta2);

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de pessoas na população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &turismo2);

    printf("Digite a população em decimal (bilhões): \n");
    scanf("%f", &popd2);

    printf("------------------ \n");

    pibcapita = (float)(pib / popd);
    densidadepop = (populacao / area);

    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB Per Capita: %.2f reais\n", pibcapita);

    printf("------------------ \n");

    pibcapita2 = (float)(pib2 / popd2);
    densidadepop2 = (populacao2 / area2);

    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB Per Capita: %.2f reais\n", pibcapita2);

    return 0;
}