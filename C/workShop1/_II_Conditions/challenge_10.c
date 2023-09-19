#include<stdio.h>
#include<string.h>

int main() {
    char date[10], month[3], month_lettres[10];
    // L asaisir de date
    printf("\nSaisir une date au format 00/00/0000 : ");
    scanf("%s", &date);
    
    // Définir le mois apartir de la date    
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    // Reformer le mois de nombre à nom 
    if (strcmp(month, "01") == 0) 
        strcpy(month_lettres, "Jenvier");
    else if (strcmp(month, "02") == 0) 
        strcpy(month_lettres, "Fevrier");
    else if (strcmp(month, "03") == 0) 
        strcpy(month_lettres, "Mars"); 
    else if (strcmp(month, "04") == 0)
        strcpy(month_lettres, "Avril"); 
    else if (strcmp(month, "05") == 0)
        strcpy(month_lettres, "Mai"); 
     else if (strcmp(month, "06") == 0)
        strcpy(month_lettres, "Juin"); 
    else if (strcmp(month, "07") == 0)
        strcpy(month_lettres, "Juillet"); 
    else if (strcmp(month, "08") == 0)
        strcpy(month_lettres, "Aout"); 
    else if (strcmp(month, "09") == 0)
        strcpy(month_lettres, "Septembre"); 
    else if (strcmp(month, "10") == 0)
        strcpy(month_lettres, "Octobre"); 
    else if (strcmp(month, "11") == 0)
        strcpy(month_lettres, "Novembre"); 
    else if (strcmp(month, "12") == 0)
        strcpy(month_lettres, "Decembre"); 
    else{
        strcpy(month_lettres, "undefined");      
    }

    // La résultat
    if (strcmp(month_lettres, "undefined")) 
        printf("%c%c-%s-%c%c%c%c", date[0], date[1], month_lettres, date[6], date[7], date[8], date[9]);
    else
        printf("\nLe mois %s introvable !! ", month); 
}