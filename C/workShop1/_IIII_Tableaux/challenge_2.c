/* 
 * Écrire un programme qui demande 10 nombres entiers à l’utilisateur,
 * les range dans un tableau avant d’en rechercher le plus grand et le plus petit.
 * Afficher le tableau, ainsi que le nombre le plus petit et le plus grand. 
 * 
 */

#include <stdio.h>

int main(){
    int myArray[10], min, max, i = 0;

    // Initializing min and max by the first element 
    printf("\n\t\tEnter element myArray[0] : ");
    scanf("%d", &myArray[0]);
    max = myArray[0];
    min = myArray[0];

    // Get the rest of the array
    for(i = 1; i < 10; i++){
        printf("\t\tEnter element myArray[%d] : ", i);
        scanf("%d", &myArray[i]);
        if(min > myArray[i]) min = myArray[i];
        if(max < myArray[i]) max = myArray[i];
    }

    // Output the array elements
    for(int i = 0; i < 10; i++){
        printf("\t\tmyArray[%d] = %d\n",i, myArray[i]);
    }

    // Output the max and min
    printf("\t\t\tLe plus petit est : %d\n", min);
    printf("\t\t\tLe plus grand est : %d\n", max);
}