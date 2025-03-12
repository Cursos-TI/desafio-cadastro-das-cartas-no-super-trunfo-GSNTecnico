#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declaração de variáveis;
    char estado[8];                // Declara uma variável de caractere chamada "estado";
    char carta[4];                 // Declara uma variável de caractere chamada "carta";
    char cidade[50];               // Declara uma variável de caractere chamada "cidade";
    int populacao;                 // Declara uma variável inteira chamada "populacao";
    float area;                    // Declara uma variável de ponto flutuante chamada "area";
    float pib;                     // Declara uma variável de ponto flutuante chamada "pib";
    int pontos;                    // Declara uma variável inteira chamada "pontos";

    // Inicia a entrada de dados da carta 1;
    printf ("Desafio Super Trunfo - Países \n");
    printf ("\nComece o cadastro da Carta 1: \n");
    printf ("Digite uma letra de 'A' a 'H' que fará parte do código da carta: ");
    scanf ("%s", &estado);         // Grava a entrada dos dados na variável "estado";

    printf ("Digite um número de '01' a '04' que fará parte do código da carta: ");
    scanf ("%s", &carta);          // Grava a entrada dos dados na variável "carta";

    printf ("Digite o nome da cidade correspondente a carta: ");
    scanf ("%s", &cidade);         // Grava a entrada dos dados na variável "cidade";

    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao);      // Grava a entrada dos dados na variável "populacao";

    printf ("Digite a área da cidade em quilômetros quadrados: ");
    scanf ("%f", &area);           // Grava a entrada dos dados na variável "area";

    printf ("Digite o produto interno bruto da cidade: ");
    scanf ("%f", &pib);            // Grava a entrada dos dados na variável "pib";

    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos);         // Grava a entrada dos dados na variável "pontos";

    // Inicia a saída de dados da carta 1 na tela;
    printf ("\nCarta1: \n");
    printf ("Estado: %s \n", estado);
    printf ("Código: %s%s \n", estado, carta);
    printf ("Nome da Cidade: %s \n", cidade);
    printf ("População: %d habitantes \n", populacao);
    printf ("Área: %.2f Km² \n", area);
    printf ("PIB: %.2f bilhões de reais \n", pib);
    printf ("Número de Pontos Turísticos: %d \n", pontos);

    // Inicia a entrada de dados da carta 2;
    printf ("\nAgora cadastre a Carta 2: \n");
    printf ("Digite uma letra de 'A' a 'H' que fará parte do código da carta: ");
    scanf ("%s", &estado);         // Grava a entrada dos dados na variável "estado";

    printf ("Digite um número de '01' a '04' que fará parte do código da carta: ");
    scanf ("%s", &carta);          // Grava a entrada dos dados na variável "carta";

    printf ("Digite o nome da cidade correspondente a carta: ");
    scanf ("%s", &cidade);         // Grava a entrada dos dados na variável "cidade";

    printf ("Digite o número de habitantes da cidade: ");
    scanf ("%d", &populacao);      // Grava a entrada dos dados na variável "populacao";

    printf ("Digite a área da cidade em quilômetros quadrados: ");
    scanf ("%f", &area);           // Grava a entrada dos dados na variável "area";

    printf ("Digite o produto interno bruto da cidade: ");
    scanf ("%f", &pib);            // Grava a entrada dos dados na variável "pib";

    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos);         // Grava a entrada dos dados na variável "pontos";

    // Inicia a saída de dados da carta 2 na tela;
    printf ("\nCarta2: \n");
    printf ("Estado: %s \n", estado);
    printf ("Código: %s%s \n", estado, carta);
    printf ("Nome da Cidade: %s \n", cidade);
    printf ("População: %d habitantes \n", populacao);
    printf ("Área: %.2f Km² \n", area);
    printf ("PIB: %.2f bilhões de reais \n", pib);
    printf ("Número de Pontos Turísticos: %d \n", pontos);

    
    return 0;
}
