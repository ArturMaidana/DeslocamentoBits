#include <stdio.h>

int multiplicar(int a, int b) {
    return a << b;
}

int dividir(int a, int b) {
    return a >> b;
}

int main() {
    int num1, num2;
    char escolha;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Escolha a operação (m para multiplicar, d para dividir): ");
    scanf(" %c", &escolha);

    switch (escolha) {
        case 'm':
            printf("Resultado da multiplicação: %d\n", multiplicar(num1, num2));
            break;
        case 'd':
            printf("Resultado da divisão: %d\n", dividir(num1, num2));
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
