#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void){
    srand(time(NULL));

    int V[SIZE], aux, troca = 0;
    int contComparacao = 0;
    int contTroca = 0;

    for(int i = 0; i < SIZE; i++){
        V[i]= rand()%100;
    }
    
    printf("Array original: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", V[i]);
    }

    do{
        troca = 0;
        for(int j = 0; j < SIZE - 1; j++){
            contComparacao++;
            if(V[j]>V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
                contTroca++;
                troca=1;
            }
        }
    }while(troca!=0);

    printf("\nArray ordenado: ");
    for( int i = 0; i < SIZE; i++){
        printf("%d ", V[i]);
    }

    printf("\nQtd de comparacoes: %d\nQtde de trocas: %d", contComparacao, contTroca);

    return 0;
}