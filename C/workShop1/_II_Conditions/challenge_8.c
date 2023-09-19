#include<stdio.h>

int main(){
    float note;

    // La saisir de note ()
    do{
        printf("\nSaisir votre note (0 <= note <= 20): ");
        scanf("%f", &note);
    }while(note>20 || note<0);
    if(note < 10){
        printf("\n \t Recale .");
    }else if(note < 12){
        printf("\n \t Passable .");
    }else if(note < 14){
        printf("\n \t Assez bien .");
    }else if(note < 16){
        printf("\n \t Bien .");
    }else{
        printf("\n \t Tres bien .");
    }
}