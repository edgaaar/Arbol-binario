#include <iostream>
#include <cstring>
#include <vector>

class NodoA
{
public:
	int dato;
	NodoA * HIzq;
	NodoA * HDer;
	NodoA * Padre;
	std::vector<NodoA*> Hijos;
	NodoA(int dato);
	NodoA(int dato , NodoA* padre);
};