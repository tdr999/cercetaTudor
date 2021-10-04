#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int key;
    struct node *left, *right;
}NODE;

NODE *makeNode(int key){
    NODE *node = (NODE*)malloc(sizeof(NODE));
    node->key = key;
    node->left = node->right = NULL;
    return node;
}


NODE *insert(NODE *node, int key){
    if (node == NULL)
        return makeNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}


int treeprint(NODE *nod){
    if (nod == NULL){
        return 0;
    }
    treeprint(nod->left);
    printf("%d \n",nod->key);
    treeprint(nod->right);
}

int main(){
    NODE *root;
    root = insert(root, 1);
    insert(root, 7);
    insert(root, 0);
    insert(root, 10);
    treeprint(root);
}



