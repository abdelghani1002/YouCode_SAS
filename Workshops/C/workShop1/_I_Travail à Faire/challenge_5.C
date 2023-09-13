#include<stdio.h>
#include<math.h>

int main() {
    int x1, x2, y1, y2;
    float distance;

    // La saisir des coordonnées pour le point M
    printf("____ point M ____\n");
    printf("Saisir l\'abscisse de M : ");
    scanf("%d", &x1);
    
    printf("Saisir l\'ordonnee de M : ");
    scanf("%d", &y1);

    // La saisir des coordonnées pour le point N
    printf("____ point N____\n");
    printf("Saisir l\'abscisse de N : ");
    scanf("%d", &x2);

    printf("Saisir l\'ordonnee de N : ");
    scanf("%d", &y2);

    // Calcul de distance 
    distance = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));

    // Resultat
    printf("La distance entre M(%d,%d) et N(%d,%d) est %.2f", x1, y1, x2, y2, distance);

    return 0;
}