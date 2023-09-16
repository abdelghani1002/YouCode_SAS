#include<stdio.h>
#include<stdbool.h>

int main(){
    // variables
    int nombre, i, estPremier = true; // For supposing that the number is prime;

    // Getting the number
    printf("\nSaisir un nombre : ");
    scanf("%d", &nombre);

    // Testing if it is a prime number by trying all number that is less than half of the ined number 
    for(i=2; i<(nombre/2); i++){
        if(nombre%i == 0){
            estPremier = false;  // When the loop finds a denominator, it's change value of 'estPremier' variable to false 
            break; // and break (one denominator is enough)
        }
    }

    // Output the result
    estPremier == true
    ? 
        printf("\n\tLe nombre %d est Premier.\n", nombre) 
    :   
        printf("\n\tLe nombre %d n\'est pas premier.\n", nombre);
}