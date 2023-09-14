#include<stdio.h>

void draw(int size);

int main(){
    int size;
    while(1){
        printf( "\n --- Taper 0 pour quiter --- \n"
                "Saisir la taile de TAZRBIYT : ");
        scanf("%d", &size);
        if (size==0) break;
        draw(size);
    }
}


void draw(int size){
    int i, j;

    if(size % 2 == 0) size++;

    for(i=1; i<=size; i++){
        printf("\n");
        for(j=1; j<=size; j++){
            if(i==1 || i==size || j==1 || j==size){
                printf("*");
            }else if(i==(int)size/2+1 &&  j==(int)size/2+1){
                printf("O");
            }else if(j==(int)size/2+1){
                printf("|");
            }else if(i==j || i+j==size+1){
                printf("+");
            }else if(i+j==(int)(size/2)+2 || (int)(size/2)+j==i || (int)(size/2)+i==j || i==(int)(size/2)+1 || i+j==(int)size*3/2+1){
                printf("*");
            }else if(i==(int)size/2+1 || (j>i && i+j<=size) || (i>j) && (i+j>size) ){
                printf("-");
            }else{
                printf(" ");
            }
        }
    }
}