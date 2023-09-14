#include<stdio.h>

int main(){
    char myChar;
    int myCharASCII;

    // La saisir de caractere
    printf("\nSaisir un caractere : ");
    scanf("%c", &myChar);

    // stocké code ASCII de ce caractere dans un entier
    myCharASCII = myChar;

    if( (myCharASCII >= 65 && myCharASCII <= 90)){
        printf("\n \t Le caractere %c est un alphabet majuscule.", myChar);
    }else if((myCharASCII >= 65 && myCharASCII <= 122) ){
        printf("\n \t Le caractere %c est un alphabet minuscule.", myChar);
    }else{
        printf("\n \t Le caractere %c n'est pas un alphabet !.", myChar);
    }
}