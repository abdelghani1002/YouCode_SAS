/*
 * un programme qui permet de calculer les solutions possible d’une équation 2ème degré. 
 * l'equation de 2ème degré : aX^2 + bX + c = 0
 * x : le variable.
 * a, b, c : les paramétres de l'equation et a faut de different de 0 .
 */

#include<stdio.h>
#include<math.h>

int main() {
    // declaration des variables 
    int a, b, c;
    float x, discriminant;

    printf( "\n--- aX^2 + bX + c = 0 ---\n");

    // La saisir des paramétres
    do{
        printf( "a must not be null !\n"
                "\tSaisir a : ");
        scanf("%d", &a);
    }while(a==0);
    printf("\tSaisir b : ");
    scanf("%d", &b);
    printf("\tSaisir c : ");
    scanf("%d", &c);

    // Calculation de discriminant
    discriminant = (b*b - 4*a*c);

    // Calcul et affichage des resultats

    if(discriminant < 0){           // Si le discriminant est négative 
        printf("\nL'equation n'admis pas aucun solution dans R.");
    }else if(discriminant == 0){    // Si le discriminant est null
        printf("\nL'equation admis %.2f comme seul solution dans R.", -b / (2*a));
    }else{                          // Si le discriminant est positive
        printf("\nL'equation admis %.2f et %.2f comme solutions dans R.", (-b + sqrt(discriminant)) / (2*a), (-b - sqrt(discriminant)) / (2*a));
    }

    return 0;
}