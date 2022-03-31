#ifndef RATIONAL_H_
#define RATIONAL_H_

#include "Polynomial.h"

class Rational{
private:
	Polynomial nom, denom;
public:
	Rational();
	Rational(const Polynomial&, const Polynomial&);
	Polynomial &getNom();
	Polynomial &getDenom();
	void print();
};

#endif
