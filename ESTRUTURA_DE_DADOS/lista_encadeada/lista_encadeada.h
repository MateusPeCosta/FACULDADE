#ifndef LISTA_ENCADEADA_H_INCLUDED
#define LISTA_ENCADEADA_H_INCLUDED

typedef struct no NO;
typedef struct lista Lista;

Lista* criaLista(Lista *l);

int listaVazia(Lista *l);

int listaTamanho(Lista *l);

int listaElemento(Lista *l, int po);

void insereInicio(Lista* l, int elemento);

void insereMeio(Lista* l, int po, int elemento);

void insereFim(Lista* l, int elemento);

void insere(Lista *l, int po, int elemento);

void removeElemento(Lista *l,int po);

void imprimirLista(Lista *l);

void limparLista(Lista *l);

void menu();


#endif