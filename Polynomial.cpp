#include <iostream>
#include <iomanip>
#include "Polynomial.h"

int Polynomial::maxDegree = 0;

Polynomial::Polynomial() : coeff(NULL), degree(0)
	{	}
Polynomial::Polynomial(int n) : degree(n){
	coeff  = new double[n+1];
	int i;
	for (i = 0; i <= n; i++)
		coeff[i] = 0;
}
Polynomial::Polynomial(double a[], int n) : degree(n){
	coeff  = new double[n+1];
	int i;
	for (i = 0; i <= n; i++){
		coeff[i] = a[i];
		if (a[i] && i > maxDegree)
			maxDegree = i;
	}
}
Polynomial::~Polynomial(){
	if(coeff){
		delete[] coeff;
		coeff = NULL;
	}
}
Polynomial &Polynomial::setCoeff(int deg, double c){
	coeff[deg] = c;
	return *this;
}
void Polynomial::print() const{
	if (!coeff && !degree)
		cout << "0" << endl;
	cout << "polynomial = " << fixed << setprecision(1);
	int i;
	for(i = 0; i <= degree; i++){
		if(i == 0)
			cout << coeff[i];
		cout << "+" << coeff[i] << "X^" << i;
	}
	cout << endl;
}
int Polynomial::getMaxDegree(){
	return maxDegree;
}
double Polynomial::getDegree(bool what){
	if(!what)
		return degree;
	int i, cnt = 0;
	for (i = 0; i <= degree; i++)
		if (coeff[i])
			cnt = i;
	return cnt;
}
double Polynomial::getCoeff(int index){

	return 0;
}
