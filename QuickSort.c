#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10


void gerarNumeros(int *, int);
void imprimir(int *, int);
void QuickSort(int *, int, int);
int particiona(int *, int, int);


int main(void){
    int V[SIZE];

    gerarNumeros(V,SIZE);
    printf("Array original:\n");
    imprimir(V, SIZE);

    QuickSort(V,0,SIZE-1); //Diferença n-1 para evitar o buffer overflow
    printf("\nArray ordenado:\n");
    imprimir(V, SIZE);

    return 0;
}

void gerarNumeros(int *V, int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        V[i] =  1 + rand()%100;
    }
}

void imprimir(int *V, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", V[i]);
    }
}

void QuickSort(int *V, int inicio, int fim){
    if(inicio<fim){
        int pos = particiona(V,inicio,fim);

        QuickSort(V,inicio, pos-1);
        QuickSort(V,pos, fim);
    }
}

int particiona(int *V, int inicio, int fim){
    
    int pivo = (V[inicio]+V[fim]+V[(inicio+fim)/2])/3;
    int aux;
    while(inicio<=fim){
        while(V[inicio]<pivo)
            inicio++;
        while(V[fim]>pivo)
            fim--;
        
        if(inicio<=fim){
            aux=V[inicio];
            V[inicio]=V[fim];
            V[fim]=aux;
            inicio++;
            fim--;
        }
    }
    return inicio;
}