#include<stdio.h>

int main() {
        int a, b;

        // La saisir de a 
        printf("\nSaisir a : ");
        scanf("%d", &a);
        // La saisir de b
        printf("\nSaisir b : ");
        scanf("%d", &b);

        printf("%d + %d = %d", a, b, a+b);

        // L'affichage des resultats des operations
        printf( "La somme          : %d + %d = %.2f\n"
                "La substraction   : %d - %d = %.2f\n"
                "La multiplication : %d * %d = %.2f\n", a, b, (float)a+b, a, b, (float)a-b, a, b, (float)a*b);
        
        // verification de divionabilite
        if(b == 0){
            printf("!! L\'operation impossible pour la division et la modulo car b egale 0");
        }else{
            printf( "La division       : %d / %d = %.2f\n"
                    "Le modulo         : %d %% %d = %.2f", a, b, (float)a/b, a, b, a%b);
        }

        return 0;
}