/*find smallest element and exchange it for first element, find second smallest and exchnge it for second smallest etc*/

#include <stdio.h>

void selectionSort(int vector[], int lenVector){
    int  aux, pozMini;

    for (int i = 0; i < lenVector; i++){
        pozMini = i;
        for (int j = i + 1; j <= lenVector; j++){ //nu tre sa vedem si prim
            if (vector[j] <= vector[pozMini]) pozMini = j;
        }
        aux = vector[i];
        vector[i] = vector[pozMini];
        vector[pozMini] = aux;
    }
}


int main(){
    int a[8] = {7, 11, 5, 90, 1, 4, 5, 6};
    
    printf("Vector ne sortat: ");
    for (int i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
    printf("\nVector sortat: ");
    selectionSort(a, 8);
    for (int i = 0; i < 7; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
