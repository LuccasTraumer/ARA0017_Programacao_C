/*
    1.7.6 Os funcionários da empresa “ToadaGoo”, recebem para cada hora extra, 50% a mais do valor da hora normal.
    Faça um programa que receba o nome de um funcionário, quantas horas normais e quantas horas extras ele trabalhou,
    assim como o valor da hora normal. Mostre, no final do programa, o salario líquido deste funcionário.
*/

#include <stdio.h>

int main() {

    printf("Digite seu nome: ");
    char nome[30];
    scanf("%s", nome);

    printf("Informe quantas horas foram trabalhadas: ");
    float quantasHorasTrabalhadas;
    scanf("%f", &quantasHorasTrabalhadas);

    printf("Informe quantas horas extras foram trabalhadas: ");
    float quantasHorasExtra;
    scanf("%f", &quantasHorasExtra);

    printf("Informe o valor da hora trabalhada: ");
    float valorHoraTrabalhada;
    scanf("%f", &valorHoraTrabalhada);

    printf("%s seu salario liquido será: %f", nome, (quantasHorasTrabalhadas + quantasHorasExtra) * valorHoraTrabalhada);
}