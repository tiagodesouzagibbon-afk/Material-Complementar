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

    Node* Cabeca = CriarNode(6);
    Cabeca->left = CriarNode(4);
    Cabeca->left->left = CriarNode(0);
    Cabeca->left->right = CriarNode(5);
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

int ImparRecursivo(Node *raiz, int NumeroImpar){
    
    if ( NumeroImpar != 2 ) return NumeroImpar; // Número impar já foi encontrado.
    if (raiz->val % 2 != 0) return raiz->val; // Atual é impar.

    if (raiz->left != NULL){
        NumeroImpar = ImparRecursivo(raiz->left, NumeroImpar);
        if ( NumeroImpar != 2 ) return NumeroImpar; // Se subarvore esquerda contem impar.
    }
    if (raiz->right != NULL){
        NumeroImpar = ImparRecursivo(raiz->right, NumeroImpar);
    }

    return NumeroImpar;
}
int AcharImpar(Node *raiz){
    int impar = ImparRecursivo(raiz, 2);
    if (impar == 2) return 0;
    return impar;
}

int main(){

    Node *Cabeca = CriarArvore();
    
    int size = AcharImpar(Cabeca);

    printf("Numero impar: %d", size);

    FreeArvore(Cabeca);

    return 0;
}