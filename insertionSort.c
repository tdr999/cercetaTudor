/*find smallest element and exchange it for first element, find second smallest and exchnge it for second smallest etc*/

#include <stdio.h>

void selectionSort(int vector[], int lenVector){
//ia elementul curent
//comparal cu cel din urma pana gasesti unu mai mare
//schimba le

    int aux;

    for (int i = 0; i < lenVector; i++){
        for (int j = i; j > 0; j--){
            if (vector[j] <= vector[j-1]){
                aux = vector[j];
                vector[j] = vector[j-1];
                vector[j-1] = aux;
            }else{break;}
        }
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
    for (int i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
