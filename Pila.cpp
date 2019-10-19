#include "Pila.h"

Pila::Pila()
{
	Elementos_en_la_pila = 0;
}

Pila::~Pila()
{
}

void Pila::Apilar(Digito DigitoGasolinera) 
{
	Nodo* D = new Nodo();
	D->DigitoPrecio = DigitoGasolinera;// asignar la carta al nodo
	if (D->DigitoPrecio.valor != -1)
	{
		if (Head == nullptr)
		{
			Head = D;
		}
		else
		{
			Nodo* Aux = new Nodo();
			Aux = Head;
			Head = D; 
			Head->siguiente = Aux; 
		}
		Elementos_en_la_pila++;
	}
}

void Pila::Ordenar_Pila(Pila *P)
{
	//METODO DE ORDENAMIENTO QUE UTILIZA UNA PILA AUX PARA ORDENAR UNA PILA P.
	Pila* Aux = new Pila();
	int n = 9;
	bool esta = false;
	while (P->Elementos_en_la_pila != 0)
	{
		esta = YaExiste_Pila(n, P);
		if (esta == true)
		{
			Aux->Apilar(P->DesapilarNumero(n, P));
			n--;
		}
		else
		{
			n--;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		P->Apilar(Aux->Desapilar());
	}
}

Digito Pila::Desapilar()
{
	if (Head == nullptr)
	{
		Digito* T = new Digito();
		T->valor = -1;
		return *T;
	}
	else
	{
		Digito Regresar = Head->DigitoPrecio;
		Head = Head->siguiente;
		Elementos_en_la_pila--;
		return Regresar;
	}
}

Digito Pila::ObtenerCima()
{
	if (Head == nullptr)
	{
		return *new Digito;
	}
	else
	{
		return Head->DigitoPrecio;
	}
}

Digito Pila::DesapilarNumero(int retirar, Pila* P)
{
	//METODO QUE RECIBE UN NUMERO ESPECIFICO Y LO DESAPILA
	int n = retirar;
	Pila* Aux = new Pila();
	int k = Elementos_en_la_pila;
	Nodo* N = new Nodo();
	Digito Devolver;
	N = P->Head;
	int cant = 0;
	for (int i = 0; i < k; i++)
	{
		if (N->DigitoPrecio.valor != n)
		{
			N = N->siguiente;
			cant++;
		}
		else
		{
			i = k + 1;
		}
	}
	if (cant == P->Elementos_en_la_pila)
	{
		System::Windows::Forms::MessageBox::Show("No se encontró el digito en la pila.");
		Digito T;
		T.valor = -1;
		return T;
	}
	for (int j = 0; j < cant; j++)
	{
		Aux->Apilar(P->Desapilar());
	}
	Devolver = P->Desapilar();
	for (int k = 0; k < cant; k++)
	{
		P->Apilar(Aux->Desapilar());
	}
	return Devolver;
}

bool Pila::YaExiste_Pila(int buscar, Pila* P)
{
	//METODO QUE VERIFICA DEVOLVIENDO UN BOOL SI UN ELEMENTO ESTÁ O NO EN LA PILA, ESTO SE USA PARA SABER SI REGRESAR EL DIGITO AL LA PILA O ENCOLARLO
	bool Existe = false;
	Nodo* Temp = new Nodo();
	Temp = P->Head;
	for (int i = 0; i < P->Elementos_en_la_pila; i++)
	{
		if (Temp->DigitoPrecio.valor == buscar)
		{
			Existe = true;
		}
		Temp = Temp->siguiente;
	}
	return Existe;
}

System::String^ Pila::ObtenerPila(Pila *PilaDigitos)
{
	//METODO QUE SIMPLEMENTE ME IMPRIME LA PILA ENTERA
	int n = PilaDigitos->Elementos_en_la_pila;
	System::String^ resultado = "";
	Pila* Aux = new Pila();
	for (int i = 0; i < n; i++)
	{
		Digito D = PilaDigitos->Desapilar();
		Aux->Apilar(D);
		//
		if (i == 0)
		{
			resultado += D.valor;
		}
		else
		{
			resultado += "\n" + D.valor;
		}
	}
	for (int i = 0; i < n; i++)
	{
		Digito D2 = Aux->Desapilar();
		PilaDigitos->Apilar(D2);
	}
	return resultado;
}