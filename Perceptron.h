#pragma once
#include <vector>
#include <memory>
#include "Node.h"

class Perceptron : public Node
{
protected:
	double netIn;
	double netOut;
	std::vector<std::weak_ptr<Edge>> inputs;

public:
	Perceptron();
	Perceptron(int inEdges, int outEdges);
	void calculate() override;
	double getNetIn() override;
	double getNetOut() override;
	void addInEdge(std::weak_ptr<Edge> inEdge);
	void addOutEdge(std::weak_ptr<Edge> outEdge) override;
	~Perceptron();
};

