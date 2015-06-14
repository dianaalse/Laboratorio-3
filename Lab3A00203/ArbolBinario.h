
#ifndef ARBOLBINARIO_H_
#define ARBOLBINARIO_H_


#include "ELemento.h"

class ArbolBinario {

	friend ostream & operator<<(ostream &, ArbolBinario &);

private:
	Elemento * raiz;

public:
	ArbolBinario();
	virtual ~ArbolBinario();

	void insertarElemento(Elemento *);

private:
	void insertarElementoRec(Elemento *, Elemento *);
	void imprimir(Elemento *, ostream &, int);
};

ostream & operator<<(ostream &, ArbolBinario &);

#endif /* ARBOLBINARIO_H_ */
