#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    Lista lista1;

    criaLista(&lista1);

    insere(&lista1,1,1);
    insere(&lista1,2,2);
    insere(&lista1,2,3);

    int lista1_tamanho = listaTamanho(&lista1);

    printf("\nNumero de elementos na lista: %d\n",lista1_tamanho);

    imprimirLista(&lista1);

    insere(&lista1,2,4);
    imprimirLista(&lista1);

    removeElemento(&lista1,3);
    imprimirLista(&lista1);


    return 0;

}
