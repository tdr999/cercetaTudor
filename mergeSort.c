/*find smallest element and exchange it for first element, find second smallest and exchnge it for second smallest etc*/

#include <stdio.h>


void printArray(int a[], int lenVector){
    for (int i = 0; i < lenVector; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}


//ne trebe un vector auxiliar de aceeasi lungime cu vectorul nostru 
int b[8];

void mergeSort(int vector[], int l, int r){
    //injumatateste recursiv si sorteaza bucata cu bucata
    //facem ca la cautare binara cu mijlocu
    int i, j, k, mijloc;
    if (r > l){
        mijloc = (r + l) / 2; //dreapta + stanga si merge
        mergeSort(vector, l, mijloc);
        mergeSort(vector, mijloc+1, r);
        for (i = mijloc+1; i > l; i--) b[i-1] = vector[i-1];
        for (j = mijloc; j < r; j++) b[r+mijloc-j] = vector[j+1];
        for (k = l; k <= r; k++)
            vector[k] = (b[i] < b[j]) ? b[i++] : b[j--];
    }
}

int main(){
    int a[8] = {7, 11, 5, 90, 1, 4, 5, 6};
    
    printf("Vector ne sortat: ");
    printArray(a, 8);
    mergeSort(a, 0, 7);
    printf("Vector sortat: "); 
    printArray(a, 8);
    return 0;
}
