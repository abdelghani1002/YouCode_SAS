#include<stdio.h>

int main() {
    int number1, number2, number3, number4, somme;
    float moyenne;

    // la saisir des quatre nombres
    printf("Saisir nombre 1 : ");
    scanf("%d", &number1);
    printf("Saisir nombre 2 : ");
    scanf("%d", &number2);
    printf("Saisir nombre 3 : ");
    scanf("%d", &number3);
    printf("Saisir nombre 4 : ");
    scanf("%d", &number4);

    // Calculation de moyenne et somme
    somme = number1 + number2 + number3 + number4;
    moyenne = somme / 4;

    // L'affichage des resultats
    printf( "La somme des nombres est : %d\n"
            "La moyenne des nombres est : %.2f", somme, moyenne);    

    return 0;
}