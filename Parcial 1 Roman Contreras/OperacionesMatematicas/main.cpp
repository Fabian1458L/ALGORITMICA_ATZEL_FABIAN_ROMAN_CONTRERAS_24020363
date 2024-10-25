#include <stdio.h>
int main()
{
    int num1, num2, tot;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    tot= num1 + num2;
    printf("\nEl resultado de la suma es: %d",tot);
    tot= num1 - num2;
    printf("\nEl resultado de la resta es: %d",tot);
    tot= num1 * num2;
    printf("\nEl resultado de la multiplicacion es: %d",tot);
    tot= num1 / num2;
    printf("\nEl resultado de la division es: %d",tot);
    return 0;
}
