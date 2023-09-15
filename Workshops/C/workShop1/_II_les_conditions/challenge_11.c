#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int dayNumber;
    char dayName[10];

    // seeder : pour eveter l'affiche de meme value
    srand(time(NULL));

    // get a randomlly number
    dayNumber = rand() % 7;

    // get day of the week 
    switch (dayNumber){
    case 0:
        strcpy(dayName, "Sunday");
        break;
    case 1:
        strcpy(dayName, "Monday");
        break;
    case 2:
        strcpy(dayName, "Tuesday");
        break;
    case 3:
        strcpy(dayName, "Wednesday");
        break;
    case 4:
        strcpy(dayName, "Thursday");
        break;
    case 5:
        strcpy(dayName, "Friday");
        break;
    case 6:
        strcpy(dayName, "Saturday");
        break;
    } 
    
    // get it out 
    printf("Random day of the week : %s", dayName);

}