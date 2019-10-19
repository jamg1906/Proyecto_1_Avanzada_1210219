#pragma once
#include "Nodo.h"
#include "Digito.h"
class Pila
{
private:
	Nodo* Head = nullptr;
public:
	int Elementos_en_la_pila = 0;
public:
	void Apilar(Digito DigitoGasolinera);
public:
	Digito Desapilar();
	Digito DesapilarNumero(int retirar_este_digito, Pila* P);
	bool YaExiste_Pila(int buscar, Pila* P);
	void Ordenar_Pila(Pila* P);
public:
	Digito ObtenerCima();
	System::String^ ObtenerPila(Pila* Pila_Digitos);
public:
	Pila();
	~Pila();

};

