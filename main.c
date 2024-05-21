
#include "helper.h"
int main()
{
    Nodo *num1=newNodo(10);
    Nodo *num2=newNodo(9);
    Nodo *num3=newNodo(8);
    Nodo *num4=newNodo(7);
    Nodo *num5=newNodo(6);
    Nodo *num6=newNodo(5);

    Lista *lista1=newLista();
    Lista *lista=newLista();
    Lista *lista2=newLista();
    agregarNumeros(num1,lista);
    agregarNumeros(num2,lista);
    agregarNumeros(num3,lista);
    agregarNumeros(num4,lista1);
    agregarNumeros(num5,lista1);
    agregarNumeros(num6,lista1);
    concatenar(lista,lista1,lista2);
    return 0;
}
