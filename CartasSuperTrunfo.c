#include <stdio.h>

int main(){
    // Declaração variaveis  Carta 1
    char estado1;
    char codigo1 [4];
    char nomeCidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaraçao variaveis Carta 2
    char estado2;
    char codigo2 [4];
    char nomeCidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Cadastro da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (A01) : ");
    scanf (" %s" , codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // LÊ o nome com espaços
    printf("Populacao: ");
    scanf("%d" , &populacao1);
    printf("Area (km): ");
    scanf("%f" ,&area1);
    printf("PIB (bilhoes de reais):  ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos:");
    scanf("%d" , &pontosTuristicos1);

    // Cadastro de carta 2
    printf("\nCadastro da carta 2:\n");
    printf("Estado (A-H) : ");
    scanf(" %c" , &estado2);
    printf("Codigo (B02): " );
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d" ,&populacao2);
    printf("Area (km) : ");
    scanf("%f" , &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d" , &pontosTuristicos2);

    // Exibição de dados (Saida formatada)
    printf("\nCarta 1 : \n");
    printf("Estado: %c\n" , estado1);
    printf("Codigo: %s\n" , codigo1);
    printf("Nome da cidade: %s\n" , nomeCidade1);
    printf("Populaçao: %d\n" , populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n" ,pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 : \n");
    printf("Estado: %c\n" , estado2);
    printf("Codigo: %s\n" , codigo2);
    printf("Nome da cidade: ");
    scanf(" %s" , nomeCidade2);
    printf("Populaçao: %d\n" , populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n" , pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    return 0;

}