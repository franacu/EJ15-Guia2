//
// Created by Fran on 21/05/2024.
//

#ifndef UNTITLED8_HELPER_H
#define UNTITLED8_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int num);
Lista *newLista();
void agregarNumeros(Nodo*nodoAI,Lista *lista);
void concatenar(Lista *lista,Lista *lista1,Lista *listaNueva);
#endif //UNTITLED8_HELPER_H
