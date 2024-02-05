#include <stdio.h>
#include <locale.h>

void inverter(int *num) {
    int inverso = 0;
    int original = *num;

    while (original > 0) {
        inverso = inverso * 10 + original % 10;
        original /= 10;
    }

    *num = inverso;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    inverter(&numero);

    printf("O n�mero invertido �: %d\n", numero);

    return 0;
}
