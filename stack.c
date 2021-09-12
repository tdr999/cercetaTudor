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

struct node *cap, *end;


void push(int x){
    struct node *nod = makeNode(x, NULL);
    nod->next = cap->next;
    cap->next = nod;
}//PUSHDOWN STACK ADICA ULTIMU ELEME
//E MEREU JOS, DEASUPRA LU CAP

void pop(){
    struct node *temp = cap->next;
    cap->next = cap->next->next;
    free(temp);
}

int main(){
    //initializam lista
    cap = makeNode(0, NULL);
    end = makeNode(1, NULL);
    cap->next = end;
    printf("Valoarea cap %d\nValoarea final %d\n ",cap->key,cap->next->key);
    return 0;
}
