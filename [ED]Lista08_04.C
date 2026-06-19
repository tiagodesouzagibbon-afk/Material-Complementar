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

int NdeFolhas(Node *raiz){
    
    if ((raiz->left == NULL) && (raiz->right == NULL)){
        return 1;
    };

    int count = 0;

    if (raiz->left != NULL){
        count += NdeFolhas(raiz->left);
    }
    if (raiz->right != NULL){
        count += NdeFolhas(raiz->right);
    }

    return count;
}

int main(){

    Node *Cabeca = CriarArvore();
    
    int size = NdeFolhas(Cabeca);

    printf("Quantidade de folhas: %d", size);

    FreeArvore(Cabeca);

    return 0;
}