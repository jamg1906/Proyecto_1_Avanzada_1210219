#include "ListaDobleEnlazada.h"
#include "Pila.h"

ListaDobleEnlazada::ListaDobleEnlazada()
{
	elementos_en_lista = 0;
}
ListaDobleEnlazada::~ListaDobleEnlazada()
{
}

void ListaDobleEnlazada::Agregar(Digito NumeroGasolinera)
{
	//METODO QUE AGREGA UN ELEMENTO EN LA LISTA (AL FINAL)
	Nodo* N = new Nodo();
	Nodo* Aux = new Nodo();
	N->DigitoPrecio = NumeroGasolinera;
	if (HeadLista == nullptr)
	{
		N->anterior = nullptr;
		N->siguiente = nullptr;
		HeadLista = N;
		EndLista = N;
	}
	else
	{
		EndLista->siguiente = N;
		Aux = EndLista;
		EndLista = N;
		//ENLAZA LOS VALORES DE ANTERIOR Y SIGUIENTE
		EndLista->anterior = Aux;
	}
	elementos_en_lista++;
}


System::String^ ListaDobleEnlazada::ObtenerLista(ListaDobleEnlazada* L)
{
	//METODO SIMPLE QUE IMPRIME LA LISTA DEVOLVIENDO UN STRING
	System::String^ resultado = "";
	Nodo* T = new Nodo();
	T = L->HeadLista;
	for (int i = 0; i < L->elementos_en_lista; i++)
	{
		if (i == 2)
		{
			resultado += "." + T->DigitoPrecio.valor;
		}
		else
		{
			resultado += T->DigitoPrecio.valor + "";
		}
		T = T->siguiente;
	}
	return resultado;
}

Digito ListaDobleEnlazada::Eliminar()
{
	//mETODO QUE ELIMINA UN DIGITIO DESDE LA CABEZA DE LA LISTA.
	if (HeadLista == nullptr)
	{
		Digito* T = new Digito();
		T->valor = -1;
		return *T;
	}
	else
	{
		Nodo* Temp = new Nodo();
		if (elementos_en_lista >= 3)
		{
			Temp = HeadLista->siguiente->siguiente;
			HeadLista->siguiente->siguiente->anterior = HeadLista->siguiente;
		}
		else
		{
			if (elementos_en_lista == 2)
			{
				HeadLista->siguiente->siguiente = nullptr;
				HeadLista->siguiente->anterior = HeadLista;
			}
			else
			{
				HeadLista->siguiente = nullptr;
				HeadLista->anterior = nullptr;
			}
		}
		Digito Regresar = HeadLista->DigitoPrecio;
		HeadLista = HeadLista->siguiente;
		elementos_en_lista--;
		return Regresar;
	}
}