#include<stdio.h>

int main() {
    int num1, num2;

    // la saision des nombres
    printf("Saisir nombre 1 : ");
    scanf("%d", &num1);
    printf("Saisir nombre 2 : ");
    scanf("%d", &num2);

    // la resultat
    if(num1 != num2){
        printf("La somme de ces nombres est %d", num1 + num2);
    }else{
        printf("Le triple de somme de ces nombres est %d", (num1 + num2) * 3);
    }
}