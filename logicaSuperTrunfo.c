#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
// Estrutura para armazenar os dados de uma cidade
struct CartaCidade {
    char estado[3];          // Estado (sigla)
    char codigo[10];         // Código da carta
    char nome[50];           // Nome da cidade
    int populacao;           // População da cidade
    float area;              // Área da cidade em km²
    float pib;               // PIB da cidade
    int pontos_turisticos;   // Número de pontos turísticos
};

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    struct CartaCidade carta1, carta2;
    
    // Cadastro das Cartas
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", carta1.estado);
    printf("Digite o código da cidade: ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nome);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", carta2.estado);
    printf("Digite o código da cidade: ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.nome);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu com maior população!\n", carta1.nome);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu com maior população!\n", carta2.nome);
    } else {
        printf("Resultado: Empate na população!\n");
}
    return 0;
}
