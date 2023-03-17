#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#define max 100

typedef struct{
    
    int vetor[max];
    int TamAtual;

}Lista;

void criaLista(Lista *l);

int listaVazia(Lista *l);

int listaCheia(Lista *l);

int listaTamanho(Lista *l);

int listaElemento(Lista *l, int po);

void insere(Lista *l, int po, int elemento);

int removeElemento(Lista *l,int po);

void imprimirLista(Lista *l);

void menu();


#endif