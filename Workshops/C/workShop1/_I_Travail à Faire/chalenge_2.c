#include<stdio.h>

int main(){
    float temperatue_F, temperature_C;
    // La saisir de temperature en Fahrenheit
    printf("\nSaisir la temerature en Fahrenheit : ");
    scanf("%f", &temperatue_F);

    // Transforme en Celsius et afficher
    temperature_C = (temperatue_F - 32) / 1.8;
    printf("La temperature en degré Celsius : %f\n", temperature_C);

    // La sensation ressentie
    if(temperature_C < -7){
        printf("Tres froid");
    }else if(temperature_C < 15){
        printf("Froid");
    }else if(temperature_C < 40){
        printf("Chaud");
    }else {
        printf("Tres chaud");
    }
    
    return 0;
}