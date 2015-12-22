#pragma once
#include <memory>
#include <vector>
#include "Edge.h"

class Node
{
protected:
	std::vector<std::weak_ptr<Edge>> outputs;

public:
	Node();
	Node(int outEdges);
	virtual void calculate() = 0;
	virtual double getNetIn() = 0;
	virtual double getNetOut() = 0;
	virtual void addOutEdge(std::weak_ptr<Edge> outEdge) = 0;
};

