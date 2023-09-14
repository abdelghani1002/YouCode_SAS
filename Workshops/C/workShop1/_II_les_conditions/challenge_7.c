#include<stdio.h>

int main(){
    char myChar;
    int myCharASCII;

    // La saisir de caractere
    printf("\nSaisir une caractere : ");
    scanf("%c", &myChar);

    // stocke le code ASCII de caractere 
    myCharASCII = myChar;

    // Vérifie le caractere s'il est un alphabet majuscule
    if(myCharASCII >= 65 && myCharASCII <= 90){
        printf("\nLa caractere %c est un alphabet majuscule.", myChar);
    }else{
        printf("\nLa caractere %c n'est pas un alphabet majuscule.", myChar);
    }
}