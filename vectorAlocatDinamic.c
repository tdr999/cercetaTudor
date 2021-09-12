#include <stdio.h>
#include <stdlib.h>


int main(){
    int a;
    printf("Baga numaru\n");
    scanf("%d", &a);
    
    
    int *b = (int*)malloc(sizeof(int) * a); //alocam pointer la in
                                            //de lungimea a
                                            //pentru ca asta 
                                            //e si un vector
                                            //afterall
    
    for (int i = 0; i < 10; i++){
        b[i] = 0;
    }

    for (int i = 0; i < a; i++){
        printf("%d\n", b[i]);
    } 
    return 0;

}
