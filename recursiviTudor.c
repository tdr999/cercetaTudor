/*Unde mallocaTudor si memorizaTudor exploreaza efectele alocarii dinamice a memoriei in heapm recursiviTudor demonstreaza "alocarile" de memorie pe stack folosind scopeul si functii recurcursive. Gen variabilele din fiecare fereastra recursiva cand zic scope gen. */

#include <stdio.h>
#define LUNGIME 60000


int reCurs(long a){
    if (a == LUNGIME){
        //facem loop sa asteptam sa vedem pe htop
        //mai jos e doar cod auxiliar
        while(!getchar()){} //baga orice caracte sa opresti
        return 0;
    }
    int b = 0; //dummy alocare de vareabla
    reCurs(a+1);
}



int main(){
    reCurs(0);
    return 0;
}

