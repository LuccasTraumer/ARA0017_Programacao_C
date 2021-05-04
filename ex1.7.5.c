/*
    1.7.5 Faça um programa que receba o nome do usuário, quantas horas ele trabalhou no mês e o valor da sua hora trabalhada.
    Mostre seu nome e o valor do seu salário. Neste caso, você deve reservar variáveis para o nome, quant. de horas trabalhadas,
     valorda hora e para o salario (que será calculado).
*/

#include <stdio.h>

int main()
{
    printf("Digite seu nome: ");
    char nomeUsuario[30];
    scanf("%s", nomeUsuario);
    
    printf("Digite quantas horas foram trabalhadas no mes: ");
    float qntdHorasTrabalhadas;
    scanf("%f", &qntdHorasTrabalhadas);
    
    printf("Digite o valor da sua hora trabalhada: ");
    float valorHora;
    scanf("%f", &valorHora);
    
    printf("Ola, %s, você receberá %f de salario",nomeUsuario, qntdHorasTrabalhadas * valorHora);

    return 0;
}