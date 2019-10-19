#pragma once
#include "Nodo.h"
#include "Digito.h"
class Cola
{
private:
	Nodo* Head = nullptr;
	Nodo* End = nullptr;
public:
	int Elementos_en_la_cola = 0;
public:
	void Encolar(Digito DigitoGasolinera);
	Digito Shift_Head();
	Digito Shift_Numero(int retirar_este_digito, Cola* C);
	bool YaExiste(int buscar, Cola* C);
	void Ordenar_Cola(Cola* C);
public: 
	System::String^ ObtenerCola(Cola* C);
public:
	Cola();
	~Cola();
};

