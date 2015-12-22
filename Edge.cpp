#include "stdafx.h"
#include "Edge.h"


Edge::Edge(std::weak_ptr<Perceptron> head, std::weak_ptr<Perceptron> tail) : head{ head }, tail{ tail }
{
}

Edge::~Edge()
{
}

double Edge::getWeight()
{
	return weight;
}

double Edge::getGradient()
{
	return gradient;
}
void Edge::setGradient(double gradient)
{
	this->gradient = gradient;
}
void Edge::setWeight(double weight)
{
	this->weight = weight;
}