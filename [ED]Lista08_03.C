#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int val;
    struct Node *left;
    struct Node *right;
} Node;

Node* CriarNode(int val){

    Node *Novo = (Node*)malloc(sizeof(Node));
    Novo->left = NULL;
    Novo->right = NULL;
    Novo->val = val;

    return Novo;
}

// Cria arvore pré determinada pra testar o exercicio
Node* CriarArvore(){

    Node* Cabeca = CriarNode(5);
    Cabeca->left = CriarNode(3);
    Cabeca->left->left = CriarNode(0);
    Cabeca->left->right = CriarNode(4);
    Cabeca->right = CriarNode(9);
    Cabeca->right->left = CriarNode(7);
    Cabeca->right->right = CriarNode(17);

    return Cabeca;
}

void FreeArvore(Node *raiz){

    if (raiz->left != NULL){
        FreeArvore(raiz->left);
    }
    if (raiz->right != NULL){
        FreeArvore(raiz->right);
    }
    free(raiz);

}

int NdeNos(Node *raiz){

    int count = 0;
    
    if ((raiz->left != NULL) || (raiz->right != NULL)){
        count = 1;
    } else return count;

    if (raiz->left != NULL){
        count += NdeNos(raiz->left);
    }
    if (raiz->right != NULL){
        count += NdeNos(raiz->right);
    }

    return count;
}

int main(){

    Node *Cabeca = CriarArvore();
    
    int size = NdeNos(Cabeca);

    printf("Quantidade de nos nao folhas: %d", size);

    FreeArvore(Cabeca);

    return 0;
}