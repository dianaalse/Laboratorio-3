
#ifndef ELEMENTOPERSONA_H_
#define ELEMENTOPERSONA_H_

#include "Elemento.h"
#include "Persona.h"


#include <iostream>
using namespace std;

class ElementoPersona : public Elemento {


private:
	Persona * p;

public:
	ElementoPersona(Persona*);
	virtual ~ElementoPersona();
	int compareTo(Elemento *);
	Persona * getPersona();
	void imprimir(ostream&)const;
};



#endif /* ELEMENTOPERSONA_H_ */
