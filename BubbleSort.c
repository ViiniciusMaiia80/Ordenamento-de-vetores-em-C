#include <stdio.h>
#define SIZE 10

int main(void){
    int V[SIZE] = {10,9,8,7,6,5,4,3,2,1}, aux;
    int contComparacao = 0;
    int contTroca = 0;


    printf("Array original: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", V[i]);
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE - 1; j++){
            contComparacao++;
            if(V[j]>V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
                contTroca++;
            }
        }
    }

    printf("\nArray ordenado: ");
    for( int i = 0; i < SIZE; i++){
        printf("%d ", V[i]);
    }

    return 0;
}