/* 
 * Application generated by the wordlist based on the victim’s data.
 */


// Header
#include<stdio.h>
#include<string.h>

// Structures

// Functions declaration.
char getChoise();

// Variables
int quite = 0;

// main
int main(){
    int choise = 1;
    while(choise != 0){
        choise = getChoise();

        switch (choise)
        {
        case 1:
            // Read
            break;
        case 2:
            // Create
            break;
        case 3:
            // Search
            break;
        case 4:
            // Delete one
            break;
        case 5:
            // Delete repeated data
            break;
        case 6:
            // Generate the wordlist
            break;
        case 0:
            // Quit
            printf("\n\t\t A bientôt.");
            break;
        }
    }

    return 0;
}

// Functions definition 

char getChoise(){
    char input[20];
    int choise = 0;

    while(1){
    printf("\n\n\t===============================================\n\t"
                    "\tMenu d\'application\n\t"
            "===============================================\n\t"
            "[1] afficher les donnees\n\t"
            "[2] ajouter une donnee\n\t"
            "[3] rechercher sur une donnee\n\t"
            "[4] supprimer une donnee\n\t"
            "[5] supprimer les donnees repetes\n\t"
            "[6] genere le wordlist\n\t"
            "[7] genere le wordlist dans un fichier .txt \n\t"
            "[8] afficher les donnees de type entier\n\t"
            "[8] afficher les donnees de type entier\n\t"
            "[0] Quitter\n\t"
            "===============================================\n\t"
            "\n\tTapez votre choix [0-8] : "
    );
        fgets(input, sizeof(input), stdin); // get the input from user.

        // verify valide input
        if( ! sscanf(input, "%d", &choise) || (choise < 0 || choise > 8)) 
            printf("\n\t\t-- Choix Invalide !! --"); 
        else
            break;
    };
    
    return choise;
}
