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
	cout << "polynomial = ";
	if (!coeff && !degree) {
		cout << "0" << endl;
		return;
	}
	cout << fixed << setprecision(1);
	int i, max = 0;
	for (i = 0; i <= degree; i++) {
		if (coeff[i] && i > max)
			max = i;
	}
	for(i = 0; i <= max; i++){
		if (i == 0) {
			if (!coeff[i])
				cout << "0";
			else
				cout << coeff[i];
		}
		else {
			cout << "+";
			if (!coeff[i])
				cout << "0";
			else
				cout << coeff[i];
			cout << "X^" << i;
		}
	}
	cout << endl;
}
int Polynomial::getMaxDegree(){
	return maxDegree;
}
int Polynomial::getDegree(bool what) const{
	if (!what) 
		return degree;
	else
		return getDegree();
}
int Polynomial::getDegree() const{
	int i, cnt = 0;
	for (i = 0; i <= degree; i++)
		if (coeff[i])
			cnt = i;
	return cnt;
}
double Polynomial::getCoeff(int index) const{
	return coeff[index];
}
