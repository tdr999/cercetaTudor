#include <stdio.h>


int main(){
    int a=2, *p;
    p = &a;
    char b='b', *q;
    printf("marimea lui a : %ld \n", sizeof(a));
    printf("marimea lui p : %ld \n", sizeof(p));
    printf("marimea lui b : %ld \n", sizeof(b));
    printf("marimea lui q : %ld \n", sizeof(q));
}
