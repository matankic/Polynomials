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
	Polynomial(const Polynomial&);
	~Polynomial();
	void print() const;
	Polynomial &setCoeff(int, double);
	static int getMaxDegree();
	int getDegree(bool) const;
	int getDegree() const;
	double getCoeff(int) const;
};

#endif
