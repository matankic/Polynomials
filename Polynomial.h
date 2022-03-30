#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

using namespace std;

class Polynomial{
private:
	double *coeff;
	int degree;
	static int maxDegree;
public:
	Polynomial();
	Polynomial(int);
	Polynomial(double [], int);
	~Polynomial();
	void print() const;
	Polynomial &setCoeff(int, double);
	static int getMaxDegree();
	double getDegree(bool);
	double getCoeff(int);


};




#endif
