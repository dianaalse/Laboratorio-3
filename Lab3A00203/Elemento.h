

#ifndef ELEMENTO_H_
#define ELEMENTO_H_

#include <iostream>
using namespace std;

class Elemento {

	friend class ArbolBinario;
	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Elemento();
	Elemento * hIzq, *hDer;

public:
	virtual ~Elemento();
	virtual int compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};

ostream & operator<<(ostream &, const Elemento &);

#endif /* ELEMENTO_H_ */
