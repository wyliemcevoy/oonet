#include "stdafx.h"
#include "Perceptron.h"

Perceptron::Perceptron()
{

}

Perceptron::Perceptron(int inEdges, int outEdges) : inputs{std::vector<std::weak_ptr<Edge>>(inEdges)}
{

}

void Perceptron::calculate()
{
}

double Perceptron::getNetIn()
{
	return netIn;
}

double Perceptron::getNetOut()
{
	return netOut;
}

void Perceptron::addInEdge(std::weak_ptr<Edge> inEdge)
{
	this->inputs.push_back(inEdge);
}

void Perceptron::addOutEdge(std::weak_ptr<Edge> outEdge)
{
	this->outputs.push_back(outEdge);
}

Perceptron::~Perceptron()
{
}
