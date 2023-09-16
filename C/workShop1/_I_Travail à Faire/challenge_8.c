#include<stdio.h>

int main() {
    int nombre;

    // La saisition de nombre
    printf("Saisir un nombre : ");
    scanf("%d", &nombre);

    // le nombre en Octal
    printf("\n%d en octal est %o",nombre, nombre);
    
    // le nombre en Héxadecimal
    printf("\n%d en hexadecimal est %X",nombre, nombre);

    return 0;
}