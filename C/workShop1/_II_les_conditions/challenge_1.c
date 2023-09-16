#include<stdio.h>

int main() {
    int nombre;

    // La saision de nombre
    printf("\nSaisir un nombre : ");
    scanf("%d", &nombre);

    // pour definir c'est pair ou impair il faut de calcul le reset de division par 2
    if(nombre%2 == 0){
        printf("%d est pair", nombre);
    }else{
        printf("%d est impair", nombre);
    }

    return 0;
}