#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    int *pont1, *pont2;

    pont1 = &num1;
    pont2 = &num2;

    printf("Digite um valor para a primeira vari�vel: ");
    scanf("%d", &num1);

    printf("Digite um valor para a segunda vari�vel: ");
    scanf("%d", &num2);
    
    *pont1 = *pont1 + *pont2;
    *pont2 = *pont1 - *pont2;
    *pont1 = *pont1 - *pont2;

    printf("\nValores atualizados\n");
    printf("Primeira vari�vel: %d\n", num1);
    printf("Segunda vari�vel: %d\n", num2);

    return 0;
}
