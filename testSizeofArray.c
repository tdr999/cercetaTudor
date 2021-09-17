#include <stdio.h>

int main(){
    int a[10];
    for (int i = 0; i < 10; i++) a[i] = 0;
    int b = (int)sizeof(a);
    printf("marimea la vector %d\n", b);
    return 0;
}
