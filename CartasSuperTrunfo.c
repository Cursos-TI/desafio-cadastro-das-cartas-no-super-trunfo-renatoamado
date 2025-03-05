#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Declaração de variáveis
char estado_1;
char codCarta_1[4];
char cidade_1[50];
int populacao_1;
int qtdPontosTuristicos_1;
float area_1;
float pib_1;
float densidadePopulacional_1;
float pibPerCapita_1;

char estado_2;
char codCarta_2[4];
char cidade_2[50];
int populacao_2;
int qtdPontosTuristicos_2;
float area_2;
float pib_2;
float densidadePopulacional_2;
float pibPerCapita_2;

void cadastrarCidades() {
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindos ao Super Trunfo Cidades.\n");
    printf("Siga as instruções abaixo para cadastrar as cidades.\n\n");


    /* CADASTRO DA PRIMEIRA CIDADE */
    printf("Cadastro da primeira cidade\n");
    printf("-------- -- -------- -------\n\n");

    printf("Informe o estado(letras de 'A' a 'H'): ");
    scanf(" %c", &estado_1); // o espaço antes do %c impede que ele pegue um \n residual
    
    printf("Informe o código(estado + número de 01 a 04): ");
    scanf("%3s", codCarta_1); // %3s é para impedir que mais de 3 caracteres sejam lidos
    
    getchar(); // limpar o buffer do \n na tentativa de evitar com que o programa pule perguntas

    printf("Informe o nome da cidade: ");
    fgets(cidade_1, 50, stdin);

    cidade_1[strcspn(cidade_1, "\n")] = 0; // remove o \n que o fgets pega

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao_1);

    printf("Informe a área(em km²): ");
    scanf("%f", &area_1);

    printf("Informe o valor do PIB (em bilhões): ");
    scanf("%f", &pib_1);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos_1);

    getchar(); // limpar o buffer do \n na tentativa de evitar com que o programa pule perguntas

    /* CADASTRO DA SEGUNDA CIDADE */    
    printf("\n\nCadastro da segunda cidade.\n");
    printf("-------- -- ------- -------\n\n");

    printf("Informe o estado(letras de 'A' a 'H'): ");
    scanf(" %c", &estado_2); // o espaço antes do %c impede que ele pegue um \n residual
    
    printf("Informe o código(estado + número de 01 a 04): ");
    scanf("%3s", codCarta_2); // %3s é para impedir que mais de 3 caracteres sejam lidos

    getchar(); // limpar o buffer do \n na tentativa de evitar com que o programa pule perguntas

    printf("Informe o nome da cidade: ");
    fgets(cidade_2, 50, stdin);
    
    cidade_2[strcspn(cidade_2, "\n")] = 0; // remove o \n que o fgets pega

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao_2);

    printf("Informe a área(em km²): ");
    scanf("%f", &area_2);

    printf("Informe o valor do PIB (em bilhões): ");
    scanf("%f", &pib_2);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdPontosTuristicos_2);

    getchar(); // limpar o buffer do \n na tentativa de evitar com que o programa pule perguntas
}

void exibirCidades() {
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /* DADOS PRIMEIRA CIADADE */
    printf("\n\nCarta 1\n");
    printf("----- -\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codCarta_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_1);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos_1);

    /* DADOS SEGUNDA CIADADE */
    printf("\n\nCarta 2\n");
    printf("----- -\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codCarta_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_2);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos_2);
}

float calculaDensidadePopulacional(int populacao, float area) {
    return (float) populacao/area;
}

float calculaPibPerCapita(int populacao, float pib) {
    return (pib/populacao)*1000000000;
}

int main() {

    cadastrarCidades();

    densidadePopulacional_1 = calculaDensidadePopulacional(populacao_1, area_1);
    densidadePopulacional_2 = calculaDensidadePopulacional(populacao_2, area_2);

    pibPerCapita_1 = calculaPibPerCapita(populacao_1, pib_1);
    pibPerCapita_2 = calculaPibPerCapita(populacao_2, pib_2);

    exibirCidades();    

    return 0;
}
