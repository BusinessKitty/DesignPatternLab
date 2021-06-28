#include "ActivationFunctions.h"
const double BETA = 1;
double Sigmoid::activate(double input){
	return 1 / (1 + exp(-BETA * input));
}
double Sigmoid::derivative(double input, double output) {
	return BETA * ((1 - output) * output);
}
double Tanh::activate(double input) {
	return tanh(BETA * input);
}
double Tanh::derivative(double input, double output) {
	return BETA * (1 - (output * output));
}
double ArcTan::activate(double input) {
	return atan(input);
}
double ArcTan::derivative(double input, double output) {
	return 1 / ((input * input) + 1);
}
double ReLU::activate(double input) {
	return input > 0 ? input : 0;
}
double ReLU::derivative(double input, double output) {
	return input > 0 ? 1 : 0;
}

