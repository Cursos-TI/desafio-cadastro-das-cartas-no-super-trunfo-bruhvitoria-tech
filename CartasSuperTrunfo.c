#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[3];
    char cidade[50];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome da cidade: \n");
    scanf("%s",&cidade);

    printf("Digite o código da cidade: \n");
    scanf("%s",&codigo);

    prinf("Digite a quantidade de população da cidade:\n");
    scanf("%d",&populacao);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d",&pontos_turisticos);

    printf("Digite a área dessa cidade:\n");
    scanf("%f",&area);

    printf("Digite o PIB(Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
