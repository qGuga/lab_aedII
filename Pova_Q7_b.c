
#include <stdio.h>
#include <stdlib.h>
// Função f(m, n) definida por partes
int f(int m, int n) {
    if (m == 1) {   // Caso base: se n for igual a 1
        return n + 1; // Retorna m + 1
    }
    else{
        printf("Argumento invalido");//caso contrario
        return 0;
    }
}
int main() {
    int m, n;
    printf("Digite o valor de m: "); // Solicita o valor de m ao usuário
    scanf("%d", &m); // Lê o valor de m
    printf("Digite o valor de n: "); // Solicita o valor de n ao usuário
    scanf("%d", &n); // Lê o valor de n
    int resultado = f(m, n); // Chama a função f com os valores de m e n
    printf(" Resultado: %d\n", resultado); // Imprime o resultado
    return 0; 
}