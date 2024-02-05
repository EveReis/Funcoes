#include <stdio.h>

void dobro(float *num) {
    *num = 2 * (*num);
}

int main() {
    float num1;
    float *pont;

    pont = &num1;

    printf("Digite um valor real: ");
    scanf("%f", &num1);

    printf("\nValor original: %.2f\n", num1);
    
    dobro(pont);
    
    printf("Valor dobrado: %.2f\n", *pont);

    return 0;
}
