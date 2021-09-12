/* This program should allocate 4 * LENGTH bytes of memory in your RAM. This is magnificent if you wanna slow your PC down or see how much memory your OS can actually allocate to your userspace. Of course, you can change the LENGTH parameter as you wish, but for now, it is set to ~16GB. Your OS should be capable enough to cap it at whatever it can, for example, on my 8Gb Lenovo, it stops at about 7.6Gb*/

#include <stdlib.h>
#include <stdio.h>
#define LENGTH 4000000000 //1 miliard * 4 de bytes
                          //vine cam 3.7 gb de memorie
                          //mi se pare ca 4 gb e 4 miliarde si cv
                          //4 bytes ptr ca sizeof(int)0

int main(){
    int *a;
    int auxVariable;

    for (int i = 0; i < LENGTH; i++){
        a = (int*)malloc(sizeof(int));
    }
    while(!scanf("%d", &auxVariable)){}//baga orice ca sa se opreasca
    return 0;
}
