#include <iostream>
#include <iomanip>
#include "Rational.h"

Rational::Rational() : nom(){
	double c[] = {1};
	Polynomial p(c, 0);
	denom = p;
}
Rational::Rational(const Polynomial &p1, const Polynomial &p2)
	{ nom = p1; denom = p2; }
Polynomial &Rational::getNom()
	{ return nom; }
Polynomial &Rational::getDenom()
	{ return denom; }
void Rational::print(){
	nom.print();
	cout << "--------------------------" << endl;
	denom.print();
}
