#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    int *pont1, *pont2;

    pont1 = &num1;
    pont2 = &num2;

    printf("Digite um valor para a primeira variável: ");
    scanf("%d", &num1);

    printf("Digite um valor para a segunda variável: ");
    scanf("%d", &num2);
    
    *pont1 = *pont1 + *pont2;
    *pont2 = *pont1 - *pont2;
    *pont1 = *pont1 - *pont2;

    printf("\nValores atualizados\n");
    printf("Primeira variável: %d\n", num1);
    printf("Segunda variável: %d\n", num2);

    return 0;
}
