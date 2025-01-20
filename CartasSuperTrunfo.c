#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    float populacao;
    double area;
    double pib;
    int pontosturisticos;
    char nome[80];

printf("Nome da cidade:\n");
scanf("%s", &nome);

printf("Insira a população:\n");
scanf(" %f", &populacao);

printf("Insira a área:\n");
scanf(" %e", &area);

printf("Insira o PIB:\n");
scanf("%e", &pib);

printf("Quantos pontos turisticos:\n");
scanf("%d", &pontosturisticos);

printf("Nome da cidade: %s\n", nome);
printf("População da cidade: %f\n", populacao);
printf("Àrea da cidade: %e\n", area);
printf("PIB da cidade: %e\n", pib);
printf("Pontos turisticos da cidade: %d\n", pontosturisticos);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade. 
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
