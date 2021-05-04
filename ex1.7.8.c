/*
    1.7.8 Faça um programa que permita que o usuário digite dois valores inteiros.
    Multiplique estes valores guardando o produto emuma terceira variável. Mostre o resultado da multiplicação.
*/

#include <stdio.h>

int main() {
    printf("Digite o primeiro Valor: ");
    int primeiroValor;
    scanf("%i", &primeiroValor);

    printf("Digite o segundo Valor: ");
    int segundoValor;
    scanf("%i", &segundoValor);

    int resultado = primeiroValor * segundoValor;

    printf("Resultado é: %i", resultado);
}