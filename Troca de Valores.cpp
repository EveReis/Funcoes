#include <stdio.h>
#include <locale.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);
    
    if (num1 > num2) {
        trocar(&num1, &num2);
    }

    if (num2 > num3) {
        trocar(&num2, &num3);
    }

    if (num1 > num2) {
        trocar(&num1, &num2);
    }
    
    printf("N�meros em ordem: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
