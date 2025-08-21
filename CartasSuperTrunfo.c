#include <stdio.h>

int main (){

    int carta;
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turismo;

    int carta2;
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;


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
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &turismo);

    printf("Digite o número da próxima carta: \n");
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
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &turismo2);

    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);

    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}