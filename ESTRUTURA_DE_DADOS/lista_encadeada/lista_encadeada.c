#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

typedef struct no
{
    int valor;
    NO *prox;
} NO;

typedef struct lista
{

    NO *inicio;
    int tamanho;

} Lista;

Lista* criaLista(Lista *l)
{

    l = (Lista*)malloc(sizeof(Lista));
    l->inicio = NULL;
    l->tamanho = 0;

    printf("\n\tLista Criada com Sucesso!\n");

    return l;
}

int listaVazia(Lista *l){

    if (l->tamanho == 0 ){ 
        return 1;
    }
    else{ 
        return 0;
    }

}

int listaTamanho(Lista *l)
{

    return l->tamanho;

}

int listaElemento(Lista *l, int po){

    NO *aux = l->inicio;
    int cont = 1;
    if (vazia() == 1){
        return -1;
    }

    if ((po < 1) || (po > listaTamanho(l))){
        return -1;
    
    }

    while (cont < po){
        aux = aux->prox;
        cont++;
    }
    return aux->valor;

}

void insereInicio(Lista* l, int elemento)
{

    NO *novo = (NO*)malloc(sizeof(NO));
    // Insere novo elemento na cabeca da lista
    if(novo){
        novo->valor;
        novo->prox = l->inicio;
        l->inicio = novo;
        l->tamanho++;
    }
    else{

        printf("ERRO");

    }

}

void insereMeio(Lista* l, int po, int elemento)
{

    int cont = 1;
    NO *novo = (NO*)malloc(sizeof(NO));
    if(novo){
        novo->valor = elemento;
        NO *aux = l->inicio;
        while ((cont < po-1) && (aux != NULL)){
            aux = aux->prox;
            cont++;
        }
        if (aux == NULL) {
            printf("ERRO");
        }
        novo->prox = aux->prox;
        aux->prox = novo;
        l->tamanho++;
    }
    else{

        printf("ERRO");

    }

}

void insereFim(Lista* l, int elemento)
{

    NO *novo = (NO*)malloc(sizeof(NO));
    if(novo){
        novo->valor = elemento;
        NO *aux = l->inicio;
        while (aux->prox != NULL){
            aux = aux->prox;
        }
        if (aux == NULL) {
            printf("ERRO");
        }

        novo->prox = NULL;
        aux->prox = novo;
        l->tamanho++;
    }
    else{

        printf("ERRO");

    }

}

void insere(Lista* l, int po, int elemento){

    if ((vazia()) && (po != 1)) {
        printf("ERRO");
    }

    if (po == 1){ // insercao no inicio da lista
        return insereInicioLista(l, elemento);
    }
    else if (po == l->tamanho+1){ // inserção no fim
        return insereFimLista(l, elemento);
    }
    else{ // inserção no meio da lista
        return insereMeioLista(l, po, elemento);
    }

}

void removeElemento(Lista *l,int po){

   

}

void imprimirLista(Lista *l){
    NO *p = l;
    for (p = l; p != NULL; p = p->prox){
        printf ("%d ", p->valor);
    }
}

void limparLista(Lista *l)//Remove todos os nós da Lista
{



}