#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"



int main(){

    Lista* lista1;
    lista1 =  criaLista(lista1);

    imprimirLista(lista1);

    limparLista(lista1);

    imprimirLista(lista1);

    if(lista1 == NULL){
        printf("Sim");
    }
    else if (lista1 != NULL){
        printf("não");
    }

    return 0;

}
