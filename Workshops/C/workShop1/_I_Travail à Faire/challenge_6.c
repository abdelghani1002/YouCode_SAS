#include<stdio.h>

int main() {
    const float PI=3.14;
    float circonference, rayon;

    // La saisir de rayon
    printf("Saisir le rayon du cercle : ");
    scanf("%f", &rayon);

    // Calculation du circonférence
    circonference = 2 * PI * rayon;

    // L'affichage de resultat
    printf("\nLa circonference de cette cercle est  : %.2f", circonference);

    return 0;
}