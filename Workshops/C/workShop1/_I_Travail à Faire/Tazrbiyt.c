#include<stdio.h>

void draw(int size);

int main(){
    int size;
    while (1) {
        // la saision de taille
        printf("\nTaper 0 for quit.\nEnter size of the TAZRBIYT : ");
        scanf("%d", &size);

        // 0 pour quiter 
        if(size == 0) break;

        // draw une Tazrbiyt avec la taille saisie 
        draw(size);
    }
}



void draw(int size){
    int i, j;
    // Si la taille est pair, en la incrementé avec 1 pour parfait resultat
    if(size % 2 == 0) {
        size++;
    }

    // Travailler en matrice de deux dimentions 
    // i pour les lignes && j pour les colones
    for(i = 1; i <= size; i++){
        printf("\n");
        for(j = 1; j <= size; j++){
            // cadre 
            
            if(i == 1 || j == 1 || i == size || j == size){
                printf("*");
            // centre de matrice
            
            }else if(i == (int) size / 2 + 1 && j == (int) size / 2 + 1){
                printf("O");
            // ligne de mellieur 
            
            }else if(i == (int) size / 2 + 1 ){
                printf("-");
            // les diagonales
            
            }else if(i + j == size + 1 || i == j){
                printf("+");
            // colone de milieur
            
            }else if(j == (int) size / 2 + 1 ){
                printf("|");
            // le reste de matrice avec espace
            }else{
                printf(" ");
            }
        }
    }
}