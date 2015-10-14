#include "Point.h"

class Cercle{
private:

	int r;

public:

	Cercle operator =(const Cercle& c);
	bool operator ==(const Cercle& c)const;//El const a dins no deixa modificar el valor de la referència
	bool operator !=(const Cercle&) const;
	const Cercle operator +=(const Cercle& c);//Const a lesquerra es el valor que torna no es pot modificar!!!!
	const Cercle operator -=(const Cercle& c);
	Cercle operator +(const Cercle& c)const;
	Cercle operator -(const Cercle& c)const;

	float getArea() const;//const a la dreta no permet modificar les variables de la classe

};