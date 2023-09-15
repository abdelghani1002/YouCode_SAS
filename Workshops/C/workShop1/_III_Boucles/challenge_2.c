#include <stdio.h>

int main()
{
    int size, i, j, k, spaces;

    // Getting the size from the user
    do{
        printf("\n-- la taille doit etre impair --\n"
               "Saisir la taile de triangle : ");
        scanf("%d", &size);
    } while (size % 2 == 0);

    // Getting spaces number from the size
    spaces = (size+1)/2;

    // Drawwing the triangle
    for (i = 1; i <= size; i += 2){
        printf("\n");
        spaces--;
        // For loop for spaces
        for (j = spaces ; j>=0; j--){
            printf(" ");
        }

        // For loop for stars
        for (k = 1; k <= i; k++){
            printf("*");
        }
    }
}
