//
// Created by River on 26/8/2022.
//

#ifndef INC_20220826_HELPER_H
#define INC_20220826_HELPER_H

typedef struct nodo {
    int nro;
    struct nodo *sig;
} Nodo;

typedef struct lista {
    int tam;
    Nodo * lista;
} Lista;

Lista* newLista(void);

Nodo* newNodo(int n);

void apilar (Lista * lista, Nodo * nodo);

Lista * inteserccionDeListas (Lista * lista1, Lista * lista2);

void imprimir(Lista * lista);

#endif //INC_20220826_HELPER_H
