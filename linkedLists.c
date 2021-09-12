#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *next;
};

struct node *makeNode(int k, struct node *nxt){
    struct node *nod = (struct node*) malloc(sizeof(struct node*));
    nod->key = k;
    nod->next = nxt; 
    return nod;
}


void deleteNext(struct node *nod){
    struct node *temp;
    temp = nod->next;
    nod->next = nod->next->next;
    free(temp); //si sterge nodu
}


void insertAfter(struct node *nodulDupaCare, int x){
    struct node *nodulDeDupa = makeNode(x, NULL);
    nodulDeDupa->next = nodulDupaCare->next;
    nodulDupaCare->next = nodulDeDupa;
}


int main(){
    //initializam lista
    struct node *cap = makeNode(0, NULL);
    struct node *end = makeNode(1, NULL);
    cap->next = end;
    printf("Valoarea cap %d\nValoarea final %d\n ",cap->key,cap->next->key);
    insertAfter(cap, 7);
    printf("Valoarea cap %d\nValoarea final %d\n ",cap->key,cap->next->key);
    deleteNext(cap);
    printf("Valoarea cap %d\nValoarea final %d\n ",cap->key,cap->next->key);
    return 0;
}
