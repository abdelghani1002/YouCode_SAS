#include<stdio.h>

int main() {
    int nombre, chiffre_1, chiffre_2, chiffre_3, inverse;

    // La saision de nombre
    printf("Saisir un nombre entier : ");
    scanf("%d", &nombre);

    // Définir des 3 chiffres
    chiffre_1 = (nombre - (nombre % 100)) / 100;
    chiffre_2 = (nombre%100 - (nombre % 10)) / 10;
    chiffre_3 = nombre%10;

    // Calcul de l'inverse et l'affichage
    inverse = (chiffre_3 * 100) + (chiffre_2 * 10) + chiffre_1;

    printf("L\'inverse de %d est %d", nombre, inverse);

    return 0;
}