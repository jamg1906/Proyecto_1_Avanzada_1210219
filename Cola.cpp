#include "Cola.h"

Cola::Cola()
{
	Elementos_en_la_cola = 0;
}

Cola::~Cola()
{
}

void Cola::Encolar(Digito DigitoGasolinera)
{
	//MEOTDO QUE ENCOLA UN DIGITO EN LA COLA
	Nodo* D = new Nodo();
	D->DigitoPrecio = DigitoGasolinera;
	if (D->DigitoPrecio.valor != -1)
	{
		if (Head == nullptr)
		{
			Head = D;
			End = D;
			End->anterior = nullptr;
		}
		else
		{
			End->anterior = End;
			End->siguiente = D;
			End = D;
		}
		Elementos_en_la_cola++;
	}
}

Digito Cola::Shift_Head()
{
	//METODO QUE ME PERMITE HACER UN SHIFT A LA CABEZA DE LA COLA
	//NO SE USA
	Nodo* D = new Nodo();
	if (End == nullptr || Head == nullptr)
	{
		Digito *T = new Digito();
		T->valor = -1;
		return *T;
	}
	else
	{
		D = Head;
		Head = Head->siguiente;
		Elementos_en_la_cola--;
		return D->DigitoPrecio;
	}
}

void Cola::Ordenar_Cola(Cola* C)
{
	//METODO DE ORDENAMIENTO PARA LA COLA UTILIZANDO UNA COLA AUXILIAR
	Cola* Aux = new Cola();
	int n = 0;
	bool esta = false;
	while (C->Elementos_en_la_cola != 0)
	{
		esta = YaExiste(n, C);
		if (esta == true)
		{
			Aux->Encolar(C->Shift_Numero(n, C));
			n++;
		}
		else
		{
			n++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		C->Encolar(Aux->Shift_Head());
	}
}

bool Cola::YaExiste(int buscar, Cola* C)
{
	//METODO QUE VERIFICA DEVOLVIENDO UN BOOL SI UN ELEMENTO YA ESTÁ EN LA COLA O SE PUEDE INTRODUCIR AHÍ.
	bool YaEsta = false;
	Nodo* Temp = new Nodo();
	Temp = C->Head;
	for (int i = 0; i < C->Elementos_en_la_cola; i++)
	{
		if (Temp->DigitoPrecio.valor == buscar)
		{
			YaEsta = true;
			
		}
		Temp = Temp->siguiente;
	}
	return YaEsta;
}

Digito Cola::Shift_Numero(int retirar_este_digito, Cola *C)
{
	//METODO QUE ME PERMITE SACAR CUALQUIER NÚMERO ESPECIFICO DE UNA COLA C
	int n = retirar_este_digito;
	Nodo* T = new Nodo();
	Cola* ColaAux = new Cola();
	int k = Elementos_en_la_cola;
	int cant = 0;
	Digito Devolver;
	T = Head;
	for (int i = 1; i <= k; i++)
	{
		if (T->DigitoPrecio.valor != n)
		{
			T = T->siguiente;
			cant++;
		}
		else
		{
			i = k + 1;
		}
	}
	if (cant == C->Elementos_en_la_cola)
	{
		System::Windows::Forms::MessageBox::Show("No se encontró el digito en la cola.");
		Digito T;
		T.valor = -1;
		return T;
	}
	for (int j = 0; j < cant; j++)
	{
		ColaAux->Encolar(C->Shift_Head());
	}
	Devolver = C->Shift_Head();
	for (int k = 0; k < cant; k++)
	{
		C->Encolar(ColaAux->Shift_Head());
	}
	return Devolver;

}

System::String^ Cola::ObtenerCola(Cola* C)
{
	//METODO SIMPLE QUE ME IMPRIME LA COLA
	System::String^ resultado = "";
	Nodo* Aux = new Nodo();
	Aux = C->Head;
	for (int i = 0; i < Elementos_en_la_cola; i++)
	{
		if (i == Elementos_en_la_cola-1)
		{
			resultado += Aux->DigitoPrecio.valor + "";
		}
		else
		{
			resultado += Aux->DigitoPrecio.valor + "\n";
		}
		Aux = Aux->siguiente;
	}
	return resultado;
}