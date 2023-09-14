#include<stdio.h>

int main(){
    int nombre;

    // La saisir de nombre
    printf("\nSaisir un nombre : ");
    scanf("%d", &nombre);

    // Définir la signe de nombre
    if(nombre < 0){
        printf("\nla nombre %d est negative.", nombre);
    }else if(nombre > 0){
        printf("\nla nombre %d est positive.", nombre);
    }else{
        printf("\nla nombre %d est null.", nombre);
    }
}