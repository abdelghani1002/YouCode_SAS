#include<stdio.h>
#include<math.h>

int main(){
    int number, numberCopy, digitsNumber = 0, inverse=0, i=10, j=1;

    // Getting the number
    printf("\nSaisir un nombre : ");
    scanf("%d", &number);
    
    // Number of digits
    numberCopy = number; // Copy of the number for calculing digits number
    while(numberCopy > 0){
        digitsNumber++;
        numberCopy /= 10;
    };

    // Calculing the inverse by getting every digit
    do{
        inverse += ((number % i) / j) * pow(10, digitsNumber-1);
        i *= 10;
        j *= 10;
        digitsNumber--;
    }while(digitsNumber > 0);

    printf("\n\tL'inverse de %d est : %d",number, inverse);
}