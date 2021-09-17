/*priority queue e cand e o sortare la elemente cu prioritete, prioritate bazata pe o valoare a unui membru sau mai stiu eu ce. aici o sa facem cu numaru cel mai mare dintr-un vectudor. Spre exemplu avem heap-ul si heap srtu. Heapul e o structura de date echivalenta unui arbore binar unde nodu tatic e mai mare ca ambii copii. Daca se adauga sau se scoate din copac un nod, copacul trebe automat sa se resorteze astfel ancat sa se pastreze regula de heap*/

/*also folosim vectori ca simplu ca taticu la un nod de pe pozitia j, e nodu de pe pozitia j/2*/


#include <stdio.h>
#define lungimeVector(vector, marimeTip) sizeof(vector)/marimeTip
#define printVector(vector, lungime) for(int i = 0; i < lungime; i++) printf("%d ", vector[i]); printf("\n");
#define MAXHEAP 30

static int HEAP[MAXHEAP+1], N = 0;

void construct(int b[], int M){
    for (N = 1; N <= M; N++) HEAP[N] = b[N]; //trebe de la 1 ca sa se respecte aia taticu lu j care e pe j/2
}


void upheap(int pozitie){
    //aici bagam o valoare noua in heap. lungimea heap creste cu 1. valoarea noua poate viola proprieteatea de heap
    //deci tre sa o "urcam" si sa facem schimbari pana se respecta asta de heap
    HEAP[0] = 9999;
    int temp;
    while (HEAP[pozitie/2] <= HEAP[pozitie]){
        temp = HEAP[pozitie];
        HEAP[pozitie] = HEAP[pozitie/2];
        HEAP[pozitie/2] = temp;
        pozitie /= 2; //creste, ma rog urca
        //urcam asta de cate ori e cazu
    }
}


void downheap(int pozitie){
    // la fel ca upheap dar jos
    //gen ia elem de la root si du l sa fie la locu care i se cuvine
    int temp;
    while (pozitie <= N/2){
        pozitie = pozitie * 2; //ne pregatim sa verifcam copiii
        //il dublam si verificam. apoi vedem care copil e mai mare
        if (HEAP[pozitie] < HEAP[pozitie+1]){
            //vericicam care copil e mai mare din aia 2
            pozitie = pozitie +  1;
        }
        //dupa dublarea pozitiei si iful ala avem copilu maxim
        //comparam cu rootu
        if (HEAP[pozitie/2] < HEAP[pozitie]){
            //daca copilu e mai mare ca rootu
            temp = HEAP[pozitie];
            HEAP[pozitie] = HEAP[pozitie/2];
            HEAP[pozitie/2] = temp;
        }else{
            break; //daca nu, opreste
        }
    }
}


int replace(){
    //scoate varfu
    int v = HEAP[1];
    HEAP[1] = HEAP[N--]; //inlocuim vf cu cel mai de jos si facem downheap
    downheap(1);
    return v;
}

void insert(int valoare){
    HEAP[++N] = valoare;//crestem lungimea si punem la coada noua valoare
    upheap(N);//ii spunem sa urce valoarea noua de la final daca e cazu
}


//implementeaza insert
//implementeaza remove

int main(){
    int a[] = {1, 5, 7, 3, 7, 90, 2, 8, 200, 300};
    int lungimeA = lungimeVector(a, sizeof(int));
    printf("%d\n", lungimeA);
    printVector(a, lungimeA);
    //astea insert si upheap ar trb sa fie suficient daca construiesti pas cu pas ca sa sorteze :)))))))))
    for (int i = 0; i < lungimeA; i++){
        insert(a[i]);
    }
    printVector(HEAP, lungimeA+1) //cum am estimat, e suficient sa construim in felul asta heapul si e sortat in o n log n
    for (int i = 0; i < lungimeA; i++){
        printf("%d ", replace()); //print sortat
    }
    putchar('\n');
    return 0;
}
