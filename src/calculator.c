/*
 * Calculadora em Linguagem C - Projeto DIO
 * Operacoes aritmeticas basicas: adicao, subtracao, multiplicacao e divisao
 * Autor: Hbini
 * Data: 2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Funcoes de operacoes aritmeticas */
float adicao(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("ERRO: Divisao por zero!\n");
        return 0;
    }
    return a / b;
}

float resto(int a, int b) {
    if (b == 0) {
        printf("ERRO: Resto por zero!\n");
        return 0;
    }
    return a % b;
}

/* Funcao para exibir o menu */
void exibir_menu() {
    printf("\n=== CALCULADORA C ===");
    printf("\nEscolha uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Resto (modulo)\n");
    printf("0. Sair\n");
    printf("Opcao: ");
}

int main() {
    int opcao;
    float num1, num2, resultado;
    int int_num1, int_num2;
    
    printf("\n=== BEM-VINDO A CALCULADORA C ===");
    printf("\nCalculadora com operacoes aritmeticas basicas\n");
    
    while (1) {
        exibir_menu();
        scanf("%d", &opcao);
        
        /* Validar opcao de sair */
        if (opcao == 0) {
            printf("\nAte logo!\n");
            break;
        }
        
        /* Validar opcao de entrada */
        if (opcao < 1 || opcao > 5) {
            printf("\nOpcao invalida! Digite um numero entre 1 e 5\n");
            continue;
        }
        
        /* Entrada de numeros */
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        
        /* Executar operacao */
        switch (opcao) {
            case 1:
                resultado = adicao(num1, num2);
                printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
                
            case 2:
                resultado = subtracao(num1, num2);
                printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
                
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
                
            case 4:
                resultado = divisao(num1, num2);
                if (num2 != 0) {
                    printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
                
            case 5:
                int_num1 = (int)num1;
                int_num2 = (int)num2;
                resultado = resto(int_num1, int_num2);
                if (int_num2 != 0) {
                    printf("\nResultado: %d %% %d = %.0f\n", int_num1, int_num2, resultado);
                }
                break;
        }
    }
    
    return 0;
}
