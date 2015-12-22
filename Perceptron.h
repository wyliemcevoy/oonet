#pragma once
#include "Edge.h"
#include <vector>
#include <memory>


class Perceptron
{
private:
	//std::vector<std::weak_ptr<Edge>> inputs;
	//std::vector<std::weak_ptr<Edge>> outputs;
	Edge *e;
public:
	Perceptron();
	Perceptron(int inEdges, int outEdges);
	//void addInEdge(std::weak_ptr<Edge> inEdge);
	//void addOutEdge(std::weak_ptr<Edge> outEdge);
	~Perceptron();
};

