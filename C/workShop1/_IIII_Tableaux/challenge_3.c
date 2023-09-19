/* 
 * Écrire un programme qui demande 10 nombres entiers à l’utilisateur,
 * les range dans un tableau et les trie de plus grand au plus petit.
 */

#include <stdio.h>

int main(){
    int myArray[10], min_pos;

    // Input array elements
    for(int i = 0; i < 10; i++){
        printf("\n\tEnter element N\'%d : ", i+1);
        scanf("%d", &myArray[i]);
    }

    // Output array elements before sorting
    printf("\n\tLes numbers BEFORE sorting them : \n");
    for(int i = 0; i < 10; i++){
        printf("\t\t %d - ", myArray[i]);
    }

    // Selection sort
    for(int i=0; i < 9; i++){
        // Get the min position
        min_pos = i;
        for(int j = i; j < 9; j++){
            if(myArray[min_pos] < myArray[j]) min_pos = j; 
        }
        // change the first element that loop(i) starts with, with value of min
        myArray[i] = myArray[i] + myArray[min_pos];
        myArray[min_pos] = myArray[i] - myArray[min_pos];
        myArray[i] = myArray[i] - myArray[min_pos];
    }

    // Output array elements after sorting
    printf("\n\tLes numbers AFTER sorting them : \n");
    for(int i = 0; i < 10; i++){
        printf("\t\t %d - ", myArray[i]);
    }

}