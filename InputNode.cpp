#include "stdafx.h"
#include "InputNode.h"

void InputNode::calculate()
{
	// Do nothing (no sigmoid, output will always be input)
}

double InputNode::getNetOut()
{
	return input;
}

double InputNode::getNetIn()
{
	return input;
}


void InputNode::addOutEdge(std::weak_ptr<Edge> outEdge)
{
}

InputNode::InputNode()
{

}

void InputNode::setInput(double input)
{
	this->input = input;
}

InputNode::~InputNode()
{

}
