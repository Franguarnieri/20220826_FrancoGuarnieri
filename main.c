#include <stdio.h>
#include "helper.h"

int main() {
    Lista* lista1=newLista();
    apilar(lista1, newNodo(8));
    apilar(lista1, newNodo(5));
    apilar(lista1, newNodo(4));
    apilar(lista1, newNodo(2));

    Lista* lista2=newLista();
    apilar(lista2, newNodo(9));
    apilar(lista2, newNodo(5));
    apilar(lista2, newNodo(3));
    apilar(lista2, newNodo(1));

    imprimir(inteserccionDeListas(lista1,lista2));
}