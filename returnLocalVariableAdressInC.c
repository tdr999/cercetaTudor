#include <stdio.h>
#include <stdlib.h>


int *localVar(){
    int a = 4;
    return &a;
}

int main(){
    int *p;
    p = localVar();
    printf("Adresa intoarsa %ls\n", p);
    printf("Valoarea intoarsa %d\n", *p);
    *p = *p + 1;
    printf("Valoarea dupa cresterea cu 1 %d\n", *p);
    return 0;
    }
