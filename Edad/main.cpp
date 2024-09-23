#include <stdio.h>

int main()
{
int a,edad;
char nombre[20];
printf("Ingrese su nombre: ");
scanf("%s", nombre);
printf("Introduzca su año de nacimiento: ");
scanf("%d", &a);
edad=2024-a;
printf("Hola %s tu edad es %d",nombre,edad );
return 0;
}
