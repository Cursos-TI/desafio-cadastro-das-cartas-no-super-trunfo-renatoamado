#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado_1;
    char codCarta_1[4];
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int qtdPontosTuristicos_1;

    char estado_2;
    char codCarta_2[4];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int qtdPontosTuristicos_2;
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindos ao Super Trunfo Cidades.\n");
    printf("Siga as instruções abaixo para cadastrar as cidades.\n\n");

    printf("Cadastro da primeira cidade.\n\n");

    printf("Informe o estado da primeira carta(letras de 'A' a 'H'): ");
    scanf(" %c", &estado_1);
    
    printf("Informe o código da carta(estado + número de 01 a 04): ");
    scanf("%3s", codCarta_1);
    
    getchar();

    printf("Informe o nome da cidade: ");
    fgets(cidade_1, 50, stdin);

    cidade_1[strcspn(cidade_1, "\n")] = 0;

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao_1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area_1);

    printf("Informe o valor do PIB: ");
    scanf("%f", &pib_1);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos_1);

    getchar();

    printf("\n\nCadastro da segunda cidade.\n\n");

    printf("Informe o estado da primeira carta(letras de 'A' a 'H'): ");
    scanf(" %c", &estado_2);
    
    printf("Informe o código da carta(estado + número de 01 a 04 - %c01): ", estado_2);
    scanf("%3s", codCarta_2);

    getchar();

    printf("Informe o nome da cidade: ");
    fgets(cidade_2, 50, stdin);
    
    cidade_2[strcspn(cidade_2, "\n")] = 0;

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao_2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area_2);

    printf("Informe o valor do PIB: ");
    scanf("%f", &pib_2);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos_2);

    getchar();

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
