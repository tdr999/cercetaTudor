/*find smallest element and exchange it for first element, find second smallest and exchnge it for second smallest etc*/

#include <stdio.h>


void printArray(int a[], int lenVector){
    for (int i = 0; i < lenVector; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}


void shellSort(int vector[], int lenVector){
    int aux;



    for (int i = lenVector/2; i > 0; i /= 2){
        for (int j = i; j < lenVector; j += 1){ //insertion sort cu gauri
           if ( vector[j] < vector[j-i]){
               aux = vector[j];
               vector[j] = vector[j-i];
               vector[j-i] = aux;
            }
        }
        printArray(vector, 8);   
    }
}

int main(){
    int a[8] = {7, 11, 5, 90, 1, 4, 5, 6};
    
    printf("Vector ne sortat: ");
    for (int i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
    putchar('\n');
    shellSort(a, 8);
    return 0;
}
