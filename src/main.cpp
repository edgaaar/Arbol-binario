#include "ArbolP.h"

int main()
{
	ArbolP arbol(1);
	arbol.AddNodo(1,2);
	arbol.AddNodo(1,3);
	arbol.AddNodo(2,4);
	arbol.AddNodo(2,5);
	arbol.AddNodo(3,6);
	arbol.AddNodo(3,7);
	arbol.AddNodo(3,10);
	arbol.AddNodo(5,9);
	arbol.AddNodo(5,8);

	arbol.ExisteEl(10);
	arbol.ExisteEl(12);

	arbol.ImprimeArbol();
	return 0;
}