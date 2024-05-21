//
// Created by Fran on 21/05/2024.
//

#include "helper.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
Nodo *newNodo(int num)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        return NULL;
    }else
    {
        aux->num=num;
        aux->sig=NULL;
        return aux;
    }
}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        return NULL;
    }else
    {
        aux->cab=NULL;
        return aux;
    }
}
void agregarNumeros(Nodo*nodoAI,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
    {
        Nodo *aux=lista->cab;
        while(aux->sig!=NULL)
        {
            aux=aux->sig;
        }
        aux->sig=nodoAI;
    }

}
void concatenar(Lista *lista, Lista *lista1, Lista *listaNueva) {
    // Si la primera lista está vacía, asigna la segunda lista como la lista concatenada
    if (lista->cab == NULL) {
        listaNueva->cab = lista1->cab;
        return;
    }
    // Encuentra el último nodo de la primera lista
    Nodo *aux= lista->cab;
    while (aux->sig != NULL) {
        aux = aux->sig;
    }

    // Une la segunda lista al último nodo de la primera lista
    aux->sig = lista1->cab;

    // Copia la primera lista concatenada a la listaNueva
    listaNueva->cab = lista->cab;

    // Imprime la lista concatenada
    Nodo *temp = listaNueva->cab;
    printf("Lista concatenada: ");
    while (temp != NULL) {
        printf("%d ", temp->num);
        temp = temp->sig;
    }
    printf("\n");
}

