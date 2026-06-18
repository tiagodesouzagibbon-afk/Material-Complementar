/*
Implemente a função reverso, que reposiciona os elementos na fila de tal forma que o
início da fila torna-se o fim, e vice-versa
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int dado;
    struct Node* prox;
} Node;

typedef struct{
    Node* frente;
    Node* atras;
} Fila;

void iniFila(Fila* f){
    f->frente = NULL;
    f->atras = NULL;
}

int isEmpty(Fila* f){
    return f->frente == NULL;
}

void enqueue(Fila* f, int valor){
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->dado = valor;
    novo->prox = NULL;
    
    if (isEmpty(f)){
        f->frente = novo;
        f->atras = novo; 
    }
    else {
        f->atras->prox = novo;
        f->atras = novo;
    }
}

int dequeue(Fila* f){

    if (isEmpty(f)){
        printf("Lista vazia.\n");
        return -1;
    }

    Node* temp = f->frente;
    int removido = temp->dado;

    f->frente = f->frente->prox;

    if (f->frente == NULL){
        f->atras = NULL;
    }

    free(temp);
    return removido;

}

int frente(Fila *f){
    if (isEmpty(f)){
        printf("Lista vazia.\n");
        return -1;
    }
    return f->frente->dado;
}

void liberar(Fila *f){
    while (!isEmpty(f)){
        dequeue(f);
    }
}

void printFila(Fila *f){
    Node* temp = f->frente;

    while (temp){
        printf("%d ", temp->dado);
        temp = temp->prox;
    }
}

void recurs(Fila *f, Node *t){
    
    Node* tnode = t->prox;

    if (tnode){
        recurs(f, tnode);
    }
    enqueue(f, t->dado);

}

void reverso(Fila *f){
    if (isEmpty(f)){
        printf("Fila vazia.\n");
        return;
    }

    int FSize = 0;

    Node* tnode = f->frente;

    while (tnode){
        FSize++;
        tnode = tnode->prox;
    }
    
    Fila tfila;
    iniFila(&tfila);
    tnode = f->frente;
    enqueue(&tfila, tnode->dado);
    
    for (int i = 1; i < FSize; i++){
        tnode = tnode->prox;
        enqueue(&tfila, tnode->dado);
    }
    liberar(f);

    recurs(f, tfila.frente);
    liberar(&tfila);
}

int main(){

    Fila lista;

    iniFila(&lista);

    for (int i = 1; i < 6; i++){
        enqueue(&lista, i);
    }
    
    printf("Lista: ");
    printFila(&lista);
    reverso(&lista);
    printf("\n\nLista reversa: ");
    printFila(&lista);

    return 0;
}