#include "NodoA.h"

NodoA::NodoA(int dato)
{
	this->dato = dato;
	this->Padre = NULL;
	this->HDer = NULL;
	this->HIzq = NULL;
}

NodoA::NodoA(int dato, NodoA* padre)
{
	this->dato = dato;
	this->Padre = padre;
	this->HDer = NULL;
	this->HIzq = NULL;
}