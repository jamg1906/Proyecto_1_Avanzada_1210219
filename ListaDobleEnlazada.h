#pragma once
#include "Nodo.h"
#include "Digito.h"
class ListaDobleEnlazada
{
private:
	Nodo* HeadLista = nullptr;
	Nodo* EndLista = nullptr;
public:
	int elementos_en_lista = 0;
	void Agregar(Digito NumeroGasolinera);
	Digito Eliminar();
	System::String^ ObtenerLista(ListaDobleEnlazada* L);
public:
	ListaDobleEnlazada();
	~ListaDobleEnlazada();
};

