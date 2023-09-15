#include<stdio.h>

int main() {
    int number, i;

    // input the number
    printf("\nSaisir un nombre entier : ");
    scanf("%d", &number);

    // output his multipliers until 10
    for(i = 1; i <= 10; i++){
        printf("\n -- %d * %d = %d", number, i, i*number);
    }
    
    return 0;
}