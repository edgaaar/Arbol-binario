#include <stack>
#include "NodoA.h"


class ArbolP
{
private:
	NodoA* BusqRec(int ref, NodoA* aux);
public:
	NodoA* Raiz;
	ArbolP(int orig);
	NodoA* BusqNodo(int v);
	bool AddNodo(int ref);
	bool ElimNodo(int ref);
	bool ExisteEl(int ref);
	void ImprimeArbol(void);
	void ImprimeArbol(NodoA* aux, std::string espacio);
	std::stack<NodoA*> Camino(NodoA* aux);

};