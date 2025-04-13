#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char Estado_1, Estado_2;
    char Codigo_da_Carta_1[20], Codigo_da_Carta_2[20];
    char Nome_da_Cidade_1[20], Nome_da_Cidade_2[20];
    int Polulacao_1 = 0, Polulacao_2 = 0;
    float Area_1 = 0, Area_2 = 0;
    float PIB_1 = 0, PIB_2 = 0;
    int Turistico_1 = 0, Turistico_2 = 0;

    
    printf("1ª Estado:\n");
    scanf("%c", &Estado_1);
    
    printf("1ª Codigo da Carta:\n");
    scanf("%s", &Codigo_da_Carta_1);

    printf("1ª Nome da Cidade:\n");
    scanf(" %[^\n]s", Nome_da_Cidade_1);

    printf("1ª Polulacao:\n");
    scanf("%d", &Polulacao_1);

    printf("1ª Area:\n");
    scanf("%f", &Area_1);
    
    printf("1ª PIB:\n");
    scanf("%f", &PIB_1);
    
    printf("1ª Pontos Turíscos:\n");
    scanf("%d", &Turistico_1);

    printf("\n");

    printf("2ª Estado:\n");
    scanf(" %c", &Estado_2);

    printf("2ª Codigo da Carta:\n");
    scanf("%s", &Codigo_da_Carta_2);

    printf("2ª Nome da Cidade:\n");
    scanf(" %[^\n]s", Nome_da_Cidade_2);

    printf("2ª Polulacao:\n");
    scanf("%d", &Polulacao_2);

    printf("2ª Area:\n");
    scanf("%f", &Area_2);
    
    printf("2ª PIB:\n");
    scanf("%f", &PIB_2);
    
    printf("2ª Pontos Turíscos:\n");
    scanf("%d", &Turistico_2);

    printf("Carta 1\n");
    printf("Estado: %c\n", Estado_1);
    printf("Codigo da Carta: %s\n", Codigo_da_Carta_1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade_1);
    printf("População: %d\n", Polulacao_1);
    printf("Area: %.2f km²\n", Area_1);
    printf("PIB: %.2f bilhões de reais\n", PIB_1);
    printf("Pontos Turísticos: %d\n", Turistico_1);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", Estado_2);
    printf("Codigo da Carta: %s\n", Codigo_da_Carta_2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade_2);
    printf("População: %d\n", Polulacao_2);
    printf("Area: %.2f km²\n", Area_2);
    printf("PIB: %.2f bilhões de reais\n", PIB_2);
    printf("Pontos Turísticos: %d\n", Turistico_2);

    return 0;
}
