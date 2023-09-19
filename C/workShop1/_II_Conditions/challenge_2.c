#include<stdio.h>

int main(){
    char caractere;

    // La saision de caractere
    printf("\nSaisir un caractere : ");
    scanf("%c", &caractere);

    // Vérifie si le caractère saisi est une voyelle
    switch (caractere){
    case 'a':
    case 'e':
    case 'y':
    case 'u':
    case 'i':
    case 'o':
        printf("\n%c est une voyelle.", caractere);
        break;
    default:
        printf("\n%c est une consonne.", caractere);
    }
    
    return 0;
}