#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void bubbleSort(int *, int);
void printArray(int *, int);
void gerarNumerosAleatorios(int *, int);

int main(void){
    int V[SIZE];
    
    gerarNumerosAleatorios(V,SIZE);

    printf("Array original: \n");
    printArray(V, SIZE);

    bubbleSort(V, SIZE);

    printf("\nArray ordenado:\n");
    printArray(V, SIZE);
    return 0;
}

void bubbleSort(int *array, int size){
    int troca, aux, contComparacao=0, contTroca=0;;
    do{
        troca=0;
        for(int j = 0; j < size - 1; j++){
            contComparacao++;
            if(array[j]>array[j+1]){
                contTroca++;
                troca = 1;
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }while(troca==1);

    printf("\n\nComparacao: %d\nTrocas: %d\n", contComparacao, contTroca);
}

void gerarNumerosAleatorios(int *array, int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        array[i]=rand()%100;
    }
}

void printArray(int *array, int size){
    for(int i = 0; i < size ; i++){
        printf("%d ", array[i]);
    }
}