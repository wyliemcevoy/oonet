#include "stdafx.h"
#include "Layer.h"


Layer::Layer(int size) : nodes{size}
{
	
}

void Layer::addNode(std::weak_ptr<Node> node_ptr)
{
	nodes.push_back(node_ptr);
}


Layer::~Layer()
{
}
