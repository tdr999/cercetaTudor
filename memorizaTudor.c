/* Program care aloca ~ 3.7Gb de ram */
#include <stdlib.h>
#include <stdio.h>
#define LUNGIME 1000000000 //1 miliard * 4 de bytes
                          //vine cam 3.7 gb de memorie
                          //mi se pare ca 4 gb e 4 miliarde si cv
                          //4 bytes ptr ca sizeof(int)0

int main(){
    int *a = (int*)malloc(sizeof(int)*LUNGIME);
    int vareablaStop;
    
    for (int i = 0; i < LUNGIME; i++){
        a[i] = 0;
    }
    while(!scanf("%d", &vareablaStop)){}//baga orice ca sa se opreasca
    free(a); //daca scoti asta, memoria ramane ocupata
               // la oprirea cu ctrl z
               // dar neocupata la oprirea cu 
               // orice altcv
}
