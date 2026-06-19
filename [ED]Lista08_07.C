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

void MaiorRecursivo(Node *raiz, int *Maior){
    
    if (raiz->val > *Maior) *Maior = raiz->val;
    
    if (raiz->left != NULL){
        MaiorRecursivo(raiz->left, Maior);
    }
    if (raiz->right != NULL){
        MaiorRecursivo(raiz->right, Maior);
    }

}
int AcharMaior(Node *raiz){
    int Maior = raiz->val;
    MaiorRecursivo(raiz, &Maior);
    return Maior;
}

int main(){

    Node *Cabeca = CriarArvore();
    
    int size = AcharMaior(Cabeca);

    printf("Maior Node: %d", size);

    FreeArvore(Cabeca);

    return 0;
}