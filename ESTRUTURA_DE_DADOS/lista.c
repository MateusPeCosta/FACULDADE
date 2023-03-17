#include <stdio.h>
#include "lista.h"

void criaLista(Lista *l){

    l->TamAtual = 0;
    printf("Lista CRIADA!");

}

int listaVazia(Lista *l){

    if(l->TamAtual == 0 ) {
        printf("Lista Vazia!!");
        return 1;
    }
    else{ 
        return 0;
    }

}

int listaCheia(Lista *l){

    if(l->TamAtual == max-1) {
        printf("Lista Cheia!!");
        return 1;
    }
    else{ 
        return 0;
    }

}

int listaTamanho(Lista *l){

    return l->TamAtual;

}

int listaElemento(Lista *l, int po){

    int elemento;

    if((po > l->TamAtual) || (po <= 0)){
        return -1;
    }
    else{
        elemento = l->vetor[po-1];
        return elemento;
    }

}

void insere(Lista *l, int po, int elemento){

    if (listaCheia(l) || (po > l->TamAtual+1) || (po<=0)){
        printf("Não foi possivel inserir o elemento!!");
    }
    for (int i = l->TamAtual; i >= po; i--){
        l->vetor[i] = l->vetor[i-1];
    }
    l->vetor[po-1] = elemento;
    l->TamAtual++;

}

int removeElemento(Lista *l,int po){
    int elemento;
    if (listaVazia(l) || (po > l->TamAtual) || (po < 1 )){
        return -1;
    }
    elemento = l->vetor[po-1];

    for (int i = po - 1; i < l->TamAtual - 1; i++){
        l->vetor[i] = l->vetor[i+1];
    }
    l->TamAtual--;
    return printf("Elemento removido: %d\n", elemento);
    
}

void imprimirLista(Lista *l){
    printf("------------------------------------------");
    printf("\nElementos da Lista: \n");
    for (int i = 0; i < l->TamAtual; i++){
        printf("%d ", l->vetor[i]);
    }
    printf("\n");
    printf("------------------------------------------\n");

}
