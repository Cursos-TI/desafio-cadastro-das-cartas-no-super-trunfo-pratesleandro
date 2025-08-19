#include <stdio.h>

int main(){
    char estado[20];
    char codigo_de_carta[10];
    char nome_da_cidade[25];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    char continuar;

    do {
        printf("Digite o estado: \n");
        scanf("%19s", estado);

        printf("Digite o codigo de carta: \n");
        scanf("%9s", codigo_de_carta);

        printf("Digite o nome da cidade: \n");
        scanf("%24s", nome_da_cidade);

        printf("Digite a populacao: \n");
        scanf("%d", &populacao);

        printf("Digite a área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB);

        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &pontos_turisticos);

        printf("\n--- Ddos Inseridos ---\n");
        printf("Estado: %s - codigo de carta: %s\n", estado, codigo_de_carta);
        printf("Cidade: %s - Populaçao: %d\n", nome_da_cidade, populacao);
        printf("Area: %.2f - PIB: %.2F - Pontos turisticos: %d\n", area, PIB, pontos_turisticos);

        printf("\nDeseja inserir outra cidade? (s/n): ");
        scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar =='S');

    return 0;

















}