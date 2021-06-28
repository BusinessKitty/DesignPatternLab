#pragma once
#include <cmath>
class Function {
public:
	virtual double activate(double input) = 0;
	virtual double derivative(double input, double output) = 0;
};

class Sigmoid : public Function {
	double activate(double input);
	double derivative(double input, double output);
};

class Tanh : public Function {
	double activate(double input);
	double derivative(double input, double output);
};

class ArcTan : public Function {
	double activate(double input);
	double derivative(double input, double output);
};

class ReLU : public Function {
	double activate(double input);
	double derivative(double input, double output);
};


