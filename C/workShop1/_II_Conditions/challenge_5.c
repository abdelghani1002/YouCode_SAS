#include<stdio.h>

int main(){
    int annee;

    // la saisir de l'annee
    printf("\nSaisir une annee : ");
    scanf("%d", &annee);

    // L'affichage
    printf("%d ans = %d mois = %d jours = %d heurs = = %d minutes = %d secondes", annee, annee*12, annee*365, annee*365*24, annee*365*24*60, annee*365*24*3600);

    return 0;
}