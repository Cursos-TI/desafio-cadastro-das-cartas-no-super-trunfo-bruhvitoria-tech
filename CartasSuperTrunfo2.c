//int main(){
/*

    char estado1[2], estado2[2];
    char cidade1[50],cidade2[50] ;
    char codigo1[3], codigo2[3];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float  DensidadePopul1,  DensidadePopul2;
    double perCapita1, perCapita2;
    float superPoder1, superPoder2;

    //Armazenando os dados da carta 1
    printf("*CARTA 1*\n");
    printf("Digite a incial do Estado:\n");
    scanf("%s", &estado1);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o código da cidade:\n");
    scanf("%s", codigo1);

    printf("Digite a quantidade de população da cidade:\n");
    scanf("%d",&populacao1);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área dessa cidade:\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    DensidadePopul1 = populacao1/area1;
    perCapita1 = pib1/populacao1;

    printf("\n***Dados carta 1***\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s - Código: %s\n", cidade1, codigo1);
    printf("Quantidade da população: %d - Área:%.2f\n", populacao1, area1);
    printf("Curiosidades --> Pontos Turisticos:%d - PIB: %.2f\n", pontos_turisticos1, pib1);
    printf("Densidade populacional: %.2f\n", DensidadePopul1);
    printf("PIB per capita: %.10f\n", perCapita1);*/

    /*DADOS DA CARTA 2!!!!!*/
    /*printf("\n*CARTA 2*\n");
    printf("Digite a incial do Estado:\n");
    scanf("%s", &estado2);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o código da cidade:\n");
    scanf("%s", codigo2);

    printf("Digite a quantidade de população da cidade:\n");
    scanf("%d",&populacao2);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área dessa cidade:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    DensidadePopul2 = populacao2/area2;
    perCapita2 = pib2/populacao2;

    printf("\n***Dados carta 2***\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s - Código: %s\n", cidade2, codigo2);
    printf("Quantidade da população: %d - Área:%.2f\n", populacao2, area2);
    printf("Curiosidades --> Pontos Turisticos:%d - PIB: %.2f\n", pontos_turisticos2, pib2);
    printf("Densidade populacional: %.2f\n", DensidadePopul2);
    printf("PIB per capita: %.10f\n", perCapita2);

    superPoder1 = (populacao1 + area1 + pib1 + populacao1 + perCapita1 + DensidadePopul1);
    superPoder2 = (populacao2 + area2 + pib2 + populacao2 + perCapita2 + DensidadePopul2);

    // Comparações
    printf("\n***Comparação de cartas***\n");
    printf("População: carta 1 venceu!(%d)\n", populacao1 > populacao2 );
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",  DensidadePopul1 < DensidadePopul2 ); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", perCapita1 > perCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    printf("Carta 1 - %s (%s): %d \n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {

        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);

    } else {

        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    }
    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(){

    char estado1[3], estado2[3];      // Corrigido tamanho para 3 (2 letras + \0)
    char cidade1[50], cidade2[50];
    char codigo1[4], codigo2[4];      // Corrigido tamanho para 4 (3 caracteres + \0)
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    double perCapita1, perCapita2;
    float superPoder1, superPoder2;
    int opcao;

    // ==== Carta 1 ====
    printf("*CARTA 1*\n");
    printf("Digite a sigla do Estado (Ex: SP): ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite a quantidade de população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área dessa cidade (em km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    densidade1 = populacao1 / area1;
    perCapita1 = pib1 / populacao1;

    // ==== Carta 2 ====
    printf("\n*CARTA 2*\n");
    printf("Digite a sigla do Estado (Ex: SP): ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite a quantidade de população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área dessa cidade (em km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    densidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    // ==== Super Poder ====
    superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + perCapita1 + densidade1;
    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + perCapita2 + densidade2;

    // ==== Menu Interativo ====
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (MENOR vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparando ===\n");
    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s (%s): %lu\n", cidade1, estado1, populacao1);
            printf("%s (%s): %lu\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            printf("%s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (area2 > area1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
            printf("%s (%s): %.2f bilhões\n", cidade2, estado2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (pib2 > pib1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s (%s): %d\n", cidade1, estado1, pontos_turisticos1);
            printf("%s (%s): %d\n", cidade2, estado2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Populacional (MENOR vence):\n");
            printf("%s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("%s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("PIB per Capita:\n");
            printf("%s (%s): %.8f\n", cidade1, estado1, perCapita1);
            printf("%s (%s): %.8f\n", cidade2, estado2, perCapita2);
            if (perCapita1 > perCapita2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (perCapita2 > perCapita1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Super Poder:\n");
            printf("%s (%s): %.2f\n", cidade1, estado1, superPoder1);
            printf("%s (%s): %.2f\n", cidade2, estado2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s (%s)\n", cidade1, estado1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor: %s (%s)\n", cidade2, estado2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\n=== Fim da Comparação ===\n");

    return 0;
}
