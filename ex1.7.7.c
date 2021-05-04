/*
    1.7.7 Faça um programa que receba do usuário um numero qualquer e mostre o quadrado deste número.
*/

#include <stdio.h>

int main() {
    printf("Digite o numero que deseja saber o Quadrado: ");
    int numero;
    scanf("%i", &numero);

    printf("O valor é: %i", numero*numero);
}