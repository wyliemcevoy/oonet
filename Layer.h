#pragma once
#include "Node.h"

class Layer
{
protected:
	std::vector<std::weak_ptr<Node>> nodes;
public:
	Layer(int size);
	void addNode(std::weak_ptr<Node> node_ptr);
	~Layer();
};

