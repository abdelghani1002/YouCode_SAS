#include<stdio.h>
#include<stdbool.h>

int main(){
    int nombre, max=0, somme=0;

    do{ // Getting the number from the user
        printf("\nSaisir un nombre positif inferieur a 100 : ");
        scanf("%d", &nombre);

        if(nombre == 0) break;  // break if it's 0
        if(nombre < 0) {        // ignore negative numbers
            printf("\n - !! Positive SVP !!\n");
            continue;
        }
        if(nombre <= 100){ // max and sum calculling  
            if(nombre > max) max = nombre;
            somme += nombre;
        }else{
            printf("\n \t Tout nombre superieur 100 est ingnor ! \n"); // ignore numbers gritter than 100
        }
    }while(nombre != 0);

    if(somme==0){
        printf("\n Serie vide !\n"); // List vide if the user starts with 0
    }else{
        printf( "\n"
                "\t Le maximum de votre serie : %d\n"
                "\t La somme de votre serie   : %d\n", max, somme);
    }
}