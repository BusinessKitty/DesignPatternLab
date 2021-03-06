//
// Created by user on 2016-11-06.
//
#include "ActivationFunctions.h"
#include "Neuron.h"
const double BETA = 1;

Neuron::Neuron() {
    Input = 0;
    Output = 0;
    Propagated_Error = 0;
}

double Neuron::get_Input() const {
    return Input;
}

void Neuron::set_Input(double Input) {
    Neuron::Input = Input;
}

double Neuron::get_Output() const {
    return Output;
}

void Neuron::set_Output(double m_Output) {
    Neuron::Output = m_Output;
}

double Neuron::get_Propagated_Error() const {
    return Propagated_Error;
}

void Neuron::set_Propagated_Error(double Propagated_Error) {
    Neuron::Propagated_Error = Propagated_Error;
}

void Neuron::AddToInput(double newValue)
{
    Neuron::Input = Neuron::Input + newValue;
}

void Neuron::ActivationFunction(Function& a) {
    Output = a.activate(Neuron::Input);
}
double Neuron::Derivative(Function& a) {
    return a.derivative(Neuron::Input,Neuron::Output);
}
//zamiast:
/*
void Neuron::SigmoidActivationFunction(){
    double new_output = 1 / (1 + exp(-BETA * Neuron::Input));
    Output = new_output;
*/

void Neuron::AddToPropagatedError(double error) {
    Neuron::Propagated_Error = Neuron::Propagated_Error + error;
}

Neuron::~Neuron() {

}
