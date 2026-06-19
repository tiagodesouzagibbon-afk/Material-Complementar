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
    Cabeca->left->left->left = CriarNode(-1); // NODE EXTRA PRA TESTAR PROFUNDIDADE
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

void ProfundidadeRecursivo(Node *raiz, int NodeDepth, int *Deepest){
    
    if (NodeDepth > *Deepest){*Deepest = NodeDepth;}
    
    if (raiz->left != NULL){
        ProfundidadeRecursivo(raiz->left, NodeDepth + 1, Deepest);
    }
    if (raiz->right != NULL){
        ProfundidadeRecursivo(raiz->right, NodeDepth + 1, Deepest);
    }

}

int Profundidade(Node *raiz){
        
    int Deepest = 0;
    ProfundidadeRecursivo(raiz, 0, &Deepest);

    return Deepest;
}

int main(){

    Node *Cabeca = CriarArvore();
    
    int size = Profundidade(Cabeca);

    printf("Profundidade: %d", size);

    FreeArvore(Cabeca);

    return 0;
}