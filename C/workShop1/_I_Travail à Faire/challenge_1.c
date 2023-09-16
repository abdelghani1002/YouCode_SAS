#include<stdio.h>
#include<string.h>

int main(){
    char nom[15], prenom[15], sexe[8];
    int age, phone;

    // Nom
    printf("saisir votre nom : ");
    scanf("%s", &nom);

    //Prenom
    printf("saisir votre prenom : ");
    scanf("%s", &prenom);

    //Sexe
    printf("saisir votre sexe (H / F) : ");
    scanf("%s", &sexe);

    //Age
    printf("saisir votre age : ");
    scanf("%d", &age);

    //Phone
    printf("saisir votre phone : ");
    scanf("%d", &phone);

    //Affichage
    printf("\n\tNom : %s\n"
        "\tPrenom : %s\n"
        "\tsexe : %s\n"
        "\tAge : %d ans\n"
        "\tphone : %d\n", nom, prenom, sexe, age, phone);
    return 0;
}