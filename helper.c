//
// Created by River on 26/8/2022.
//

#include "helper.h"
#include <stdio.h>
#include <stdlib.h>

Lista * inteserccionDeListas(Lista *lista1, Lista *lista2) {
    Lista * aux=newLista();
    Nodo * aux1= lista1->lista;
    Nodo * aux2= lista2->lista;
    while (aux1!=NULL && aux2!=NULL){
        if (aux1->nro < aux2->nro) {
            aux1 = aux1->sig;
        } else {
            if (aux1->nro > aux2->nro){
                aux2=aux2->sig;
            } else {
                apilar(aux, newNodo(aux1->nro));
                aux1 = aux1->sig;
                aux2 = aux2->sig;
            }
        }
    }
    return aux;
}

Lista *newLista(void) {
    Lista * aux=malloc(sizeof(Lista));
    if (aux==NULL){
        printf("No hay memoria disponible.");
        exit (-1);
    }
    aux->tam=0;
    aux->lista=NULL;
}

Nodo *newNodo(int n) {
    Nodo *aux=malloc(sizeof(Nodo));
    if (aux==NULL){
        printf("No hay memoria disponible.");
        exit(-1);
    }
    aux->nro=n;
    aux->sig=NULL;
}

void apilar(Lista *lista, Nodo *nodo) {
    nodo->sig=lista->lista;
    lista->lista=nodo;
    lista->tam++;
}

void imprimir(Lista *lista) {
    Nodo *aux=lista->lista;
    for (;aux!=NULL;aux=aux->sig){
        printf("%d ",aux->nro);
    }
}
