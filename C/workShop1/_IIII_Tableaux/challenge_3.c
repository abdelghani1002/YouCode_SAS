/*
 * Écrire un programme qui demande 10 nombres entiers à l’utilisateur,
 * les range dans un tableau et les trie de plus grand au plus petit.
 */

#include <stdio.h>

int main()
{
    int myArray[10], min_pos;

    // Input array elements
    for (int i = 0; i < 10; i++)
    {
        printf("\n\tEnter element N\'%d : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    // Output array elements before sorting
    printf("\n\tLes numbers BEFORE sorting them : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t\t-->%d\n", myArray[i]);
    }

    // Selection sort
    for (int i = 0; i < 9; i++)
    {
        // Get the min position
        min_pos = i + 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (myArray[j] < myArray[min_pos])
            {
                min_pos = j;
            }
        }

        // change the first element that loop(i) starts with, with value of min if its less
        printf("\n ******* i = %d : min = %d\n", i, myArray[min_pos]);
        if (myArray[i] > myArray[min_pos])
        {
            myArray[i] = myArray[i] + myArray[min_pos];
            myArray[min_pos] = myArray[i] - myArray[min_pos];
            myArray[i] = myArray[i] - myArray[min_pos];
        }
    }

    // Output array elements after sorting
    printf("\n\tLes numbers AFTER sorting them : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t\t-->%d\n", myArray[i]);
    }
}