#include <stdio.h>
// inclui a função `strcspn`
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // Dados da Carta 1
  
    // Uma letra de 'A' a 'H' (representando um dos oito estados). 
    char carta1Estado = 'A';
    
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    // Aqui reservamos espaço para 4 caracteres, considerando o caractere
    // nulo (\0) que é adicionando ao final da string.
    char carta1Codigo[4] = "A01";
    
    // O nome da cidade.
    char carta1Cidade[50] = "São Paulo";
    // População: O número de habitantes da cidade.
    unsigned long int carta1Populacao = 12300000;
    // Área (em km²): A área da cidade em quilômetros quadrados.
    float carta1AreaCidade = 1235;
    // PIB: O Produto Interno Bruto da cidade (em bilhões de reais).
    float carta1PIB = 900.66;
    // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    int carta1NumeroPontosTuristicos = 50;
    // Densidade populacional: a razão entre a população e área da cidade.
    float carta1DensidadePopulacional;
    // PIB per capita: a razão entre a o PIB da cidade e sua população.
    // Indica a riqueza média por pessoa.
    float carta1PIBPerCapita;

    // Dados da Carta 2
    
    // Uma letra de 'A' a 'H' (representando um dos oito estados). 
    char carta2Estado = 'B';
    
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    // Aqui reservamos espaço para 4 caracteres, considerando o caractere
    // nulo (\0) que é adicionando ao final da string.
    char carta2Codigo[4] = "B02";

    // O nome da cidade.
    char carta2Cidade[50] = "Rio de Janeiro";
    // População: O número de habitantes da cidade.
    unsigned long int carta2Populacao = 6000000;
    // Área (em km²): A área da cidade em quilômetros quadrados.
    float carta2AreaCidade = 1100;
    // PIB: O Produto Interno Bruto da cidade (em bilhões de reais).
    float carta2PIB = 600;
    // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    int carta2NumeroPontosTuristicos = 30;
    // Densidade populacional: a razão entre a população e área da cidade.
    float carta2DensidadePopulacional;
    // PIB per capita: a razão entre a o PIB da cidade e sua população.
    // Indica a riqueza média por pessoa.
    float carta2PIBPerCapita;
    
    // Cadastro das Cartas:
    
    // Insere os dados da carta 1

    // printf("==== Carta 1 ====\n");

    // printf("Informe o Estado da carta (de A a H): ");
    // // Utilizamos um espaço em branco antes do %c para garantir que
    // // as novas linhas (\n) não atrapalhem a leitura do caractere.
    // scanf(" %c", &carta1Estado);
    
    // printf("\nInforme o código da carta (letra do Estado + número de 01 a 04, ex: A01, B03): ");
    // scanf("%s", carta1Codigo);

    // printf("\nInforme o nome da cidade: ");
    // // Devemos executar a função `getchar()` para evitar que o `fgets`
    // // leia o caractere \n (nova linha) dos `scanf`s, permitindo
    // // a entrada de texto.
    // getchar();
    // // Utilizamos `fgets()` para permitir nomes de cidades com espaço
    // fgets(carta1Cidade, 50, stdin);
    // // Substitui o caractere \n, incluido por `fgets`, por \0
    // carta1Cidade[strcspn(carta1Cidade, "\n")] = 0;

    // printf("\nInforme o número de habitantes da cidade: ");
    // scanf("%lu", &carta1Populacao);

    // printf("\nInforme a área da cidade em quilômetros quadrados: ");
    // scanf("%f", &carta1AreaCidade);

    // printf("\nInforme o valor do PIB da cidade (em bilhões de reais): ");
    // scanf("%f", &carta1PIB);

    // printf("\nInforme o número de pontos turísticos da cidade: ");
    // scanf("%d", &carta1NumeroPontosTuristicos);

    // Calcula a densidade populacional, utilizando a razão
    // entre o número de habitantes e àrea da cidade.
    // Realizamos o casting do valor da população para `float`.
    carta1DensidadePopulacional = (float) carta1Populacao / carta1AreaCidade;

    // Calcula o PIB per capita, utilizando a razão entre o PIB
    // e o número de habitantes. Multiplicamos o valor do PIB por 1 bilhão,
    // para usar a mesma unidade que o número de habitantes. Realizamos o 
    // casting do valor da populção para `float`.
    carta1PIBPerCapita = carta1PIB * 1000000000 / (float) carta1Populacao;

    // printf("\n=================\n");

    // Insere os dados da carta 2

    // printf("==== Carta 2 ====\n");

    // printf("Informe o Estado da carta (de A a H): ");
    // // Utilizamos um espaço em branco antes do %c para garantir que
    // // as novas linhas (\n) não atrapalhem a leitura do caractere.
    // scanf(" %c", &carta2Estado);
    
    // printf("\nInforme o código da carta (letra do Estado + número de 01 a 04, ex: A01, B03): ");
    // scanf("%s", carta2Codigo);

    // printf("\nInforme o nome da cidade: ");
    // // Devemos executar a função `getchar()` para evitar que o `fgets`
    // // leia o caractere \n (nova linha) dos `scanf`s, permitindo
    // // a entrada de texto.
    // getchar();
    // // Utilizamos `fgets()` para permitir nomes de cidades com espaço
    // fgets(carta2Cidade, 50, stdin);
    // // Substitui o caractere \n, incluido por `fgets`, por \0
    // carta2Cidade[strcspn(carta2Cidade, "\n")] = 0;

    // printf("\nInforme o número de habitantes da cidade: ");
    // scanf("%lu", &carta2Populacao);

    // printf("\nInforme a área da cidade em quilômetros quadrados: ");
    // scanf("%f", &carta2AreaCidade);

    // printf("\nInforme o valor do PIB da cidade (em bilhões de reais): ");
    // scanf("%f", &carta2PIB);

    // printf("\nInforme o número de pontos turísticos da cidade: ");
    // scanf("%d", &carta2NumeroPontosTuristicos);

    // Calcula a densidade populacional, utilizando a razão
    // entre o número de habitantes e àrea da cidade.
    // Realizamos o casting do valor da população para `float`.
    carta2DensidadePopulacional = (float) carta2Populacao / carta2AreaCidade;

    // Calcula o PIB per capita, utilizando a razão entre o PIB
    // e o número de habitantes. Multiplicamos o valor do PIB por 1 bilhão,
    // para usar a mesma unidade que o número de habitantes. Realizamos o 
    // casting do valor da populção para `float`.
    carta2PIBPerCapita = carta2PIB * 1000000000 / (float) carta2Populacao;

    // printf("\n=================\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    int opcaoAtributo1;

    printf("==== Atributo 1 de comparação das cartas ====\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha um atributo: ");
    scanf("%d", &opcaoAtributo1);

    int opcaoAtributo2;

    printf("==== Atributo 2 de comparação das cartas ====\n");
    if (opcaoAtributo1 != 1) { printf("1. População\n"); }
    if (opcaoAtributo1 != 2) { printf("2. Área\n"); }
    if (opcaoAtributo1 != 3) { printf("3. PIB\n"); }
    if (opcaoAtributo1 != 4) { printf("4. Número de pontos turísticos\n"); }
    if (opcaoAtributo1 != 5 ) { printf("5. Densidade demográfica\n"); }
    printf("Escolha um atributo: ");
    scanf("%d", &opcaoAtributo2);

    if (opcaoAtributo1 != opcaoAtributo2) {

        // Exibição dos Resultados:
        // Após realizar as comparações, exiba os resultados para o usuário.
        // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
        int resultadoAtributo1;
        int resultadoAtributo2;

        float carta1Soma;
        float carta2Soma;

        printf("==== Comparação de cartas ====\n");

        printf("Carta 1: %s\n", carta1Cidade);
        printf("Carta 2: %s\n", carta2Cidade);
        
        printf("Atributo 1: ");
        
        switch (opcaoAtributo1) {
            case 1:
                printf("População\n");
                printf("  Valor da carta 1: %lu\n", carta1Populacao);
                printf("  Valor da carta 2: %lu\n", carta2Populacao);

                carta1Soma += (float)carta1Populacao;
                carta2Soma += (float)carta2Populacao;

                resultadoAtributo1 = (carta1Populacao > carta2Populacao
                                          ? 1
                                      : carta1Populacao < carta2Populacao
                                          ? 2
                                          : 0);
                break;
            case 2:
                printf("Área\n");
                printf("  Valor da carta 1: %.2f\n", carta1AreaCidade);
                printf("  Valor da carta 2: %.2f\n", carta2AreaCidade);

                carta1Soma += (float)carta1AreaCidade;
                carta2Soma += (float)carta2AreaCidade;

                resultadoAtributo1 = (carta1AreaCidade > carta2AreaCidade
                                          ? 1
                                      : carta1AreaCidade < carta2AreaCidade
                                          ? 2
                                          : 0);
                break;
            case 3:
                printf("PIB\n");
                printf("  Valor da carta 1: %.2f\n", carta1PIB);
                printf("  Valor da carta 2: %.2f\n", carta2PIB);

                carta1Soma += (float)carta1PIB;
                carta2Soma += (float)carta2PIB;

                resultadoAtributo1 = (carta1PIB > carta2PIB
                                          ? 1
                                      : carta1PIB < carta2PIB
                                          ? 2
                                          : 0);
    
                break;
            case 4:
                printf("Número de pontos turísticos\n");
                printf("  Valor da carta 1: %d\n", carta1NumeroPontosTuristicos);
                printf("  Valor da carta 2: %d\n", carta2NumeroPontosTuristicos);

                carta1Soma += (float)carta1NumeroPontosTuristicos;
                carta2Soma += (float)carta2NumeroPontosTuristicos;

                resultadoAtributo1 = (carta1NumeroPontosTuristicos > carta2NumeroPontosTuristicos
                                          ? 1
                                      : carta1NumeroPontosTuristicos < carta2NumeroPontosTuristicos
                                          ? 2
                                          : 0);
    
                break;
            case 5:
                printf("Densidade demográfica\n");
                printf("  Valor da carta 1: %.1f\n", carta1DensidadePopulacional);
                printf("  Valor da carta 2: %.1f\n", carta2DensidadePopulacional);

                // Somamos com o inverso da densidade, uma vez que
                // o menor valor vence

                carta1Soma += 1/carta1DensidadePopulacional;
                carta2Soma += 1/carta2DensidadePopulacional;

                resultadoAtributo1 = (carta1DensidadePopulacional < carta2DensidadePopulacional
                                          ? 1
                                      : carta1DensidadePopulacional > carta2DensidadePopulacional
                                          ? 2
                                          : 0);
                break;
            default:
                printf("Opção inválida\n");
                resultadoAtributo1 = -1;
                break;
        }

        printf("Atributo 2: ");

        switch (opcaoAtributo2) {
            case 1:
                printf("População\n");
                printf("  Valor da carta 1: %lu\n", carta1Populacao);
                printf("  Valor da carta 2: %lu\n", carta2Populacao);

                carta1Soma += (float)carta1Populacao;
                carta2Soma += (float)carta2Populacao;

                resultadoAtributo2 = (carta1Populacao > carta2Populacao
                                          ? 1
                                      : carta1Populacao < carta2Populacao
                                          ? 2
                                          : 0);
                break;
            case 2:
                printf("Área\n");
                printf("  Valor da carta 1: %.2f\n", carta1AreaCidade);
                printf("  Valor da carta 2: %.2f\n", carta2AreaCidade);

                carta1Soma += (float)carta1AreaCidade;
                carta2Soma += (float)carta2AreaCidade;

                resultadoAtributo2 = (carta1AreaCidade > carta2AreaCidade
                                          ? 1
                                      : carta1AreaCidade < carta2AreaCidade
                                          ? 2
                                          : 0);
                break;
            case 3:
                printf("PIB\n");
                printf("  Valor da carta 1: %.2f\n", carta1PIB);
                printf("  Valor da carta 2: %.2f\n", carta2PIB);

                carta1Soma += (float)carta1PIB;
                carta2Soma += (float)carta2PIB;

                resultadoAtributo2 = (carta1PIB > carta2PIB
                                          ? 1
                                      : carta1PIB < carta2PIB
                                          ? 2
                                          : 0);
    
                break;
            case 4:
                printf("Número de pontos turísticos\n");
                printf("  Valor da carta 1: %d\n", carta1NumeroPontosTuristicos);
                printf("  Valor da carta 2: %d\n", carta2NumeroPontosTuristicos);

                carta1Soma += (float)carta1NumeroPontosTuristicos;
                carta2Soma += (float)carta2NumeroPontosTuristicos;

                resultadoAtributo2 = (carta1NumeroPontosTuristicos > carta2NumeroPontosTuristicos
                                          ? 1
                                      : carta1NumeroPontosTuristicos < carta2NumeroPontosTuristicos
                                          ? 2
                                          : 0);
    
                break;
            case 5:
                printf("Densidade demográfica\n");
                printf("  Valor da carta 1: %.1f\n", carta1DensidadePopulacional);
                printf("  Valor da carta 2: %.1f\n", carta2DensidadePopulacional);

                // Somamos com o inverso da densidade, uma vez que
                // o menor valor vence

                carta1Soma += 1/carta1DensidadePopulacional;
                carta2Soma += 1/carta2DensidadePopulacional;

                resultadoAtributo2 = (carta1DensidadePopulacional < carta2DensidadePopulacional
                                          ? 1
                                      : carta1DensidadePopulacional > carta2DensidadePopulacional
                                          ? 2
                                          : 0);
                break;
            default:
                printf("Opção inválida\n");
                resultadoAtributo2 = -1;
                break;
        }

        // valida se os valores corretos foram fornecidos

        if (resultadoAtributo1 != -1 && resultadoAtributo2 != -1) {
            printf("Soma dos atributos da carta 1: %f\n", carta1Soma);
            printf("Soma dos atributos da carta 2: %f\n", carta2Soma);

            if (carta1Soma > carta2Soma) {
                printf("A carta 1 (%s) venceu a rodada!\n", carta1Cidade);
            } else if (carta1Soma < carta2Soma) {
                printf("A carta 2 (%s) venceu a rodada!\n", carta2Cidade);
            } else {
                printf("Empate!\n");
            }
        }
    } else {
        printf("Você não pode escolher o mesmo atributo duas vezes\n");
    }
    
    return 0;
}
